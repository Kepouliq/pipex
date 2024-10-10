/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:00:39 by kepouliq          #+#    #+#             */
/*   Updated: 2024/10/10 14:12:59 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

static void	execute_command(char **path, char *av, char **env)
{
	char	**cmd;
	char	*path_for_cmd;

	cmd = ft_split(av, ' ');
	if (!cmd)
	{
		ft_free_tab(path);
		perror(av);
		exit(EXIT_FAILURE);
	}
	path_for_cmd = get_path_cmd(path, cmd[0]);
	if (!path_for_cmd)
	{
		perror(*path);
		ft_free_tab(cmd);
		ft_free_tab(path);
		exit(EXIT_FAILURE);
	}
	if (!path_for_cmd[0])
		path_for_cmd = ft_strdup(cmd[0]);
	if (execve(path_for_cmd, cmd, env) == -1)
		return (perror(cmd[0]), free(path_for_cmd), ft_free_tab(cmd),
			ft_free_tab(path), exit(EXIT_FAILURE));
	return (free(path_for_cmd), ft_free_tab(cmd), ft_free_tab(path));
}

static void	process_child(int *fd, char **av, char **env)
{
	char	**path;
	int		infile;

	path = get_path(env);
	infile = open(av[1], O_RDONLY);
	if (infile == -1)
	{
		ft_free_tab(path);
		close(fd[0]);
		close(fd[1]);
		perror(av[1]);
		exit(EXIT_FAILURE);
	}
	dup2(infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(infile);
	close(fd[0]);
	close(fd[1]);
	execute_command(path, av[2], env);
}

static void	process_parent(int *fd, char **av, char **env)
{
	char	**path;
	int		outfile;

	path = get_path(env);
	outfile = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (outfile == -1)
	{
		ft_free_tab(path);
		close(fd[0]);
		close(fd[1]);
		perror(av[4]);
		exit(EXIT_FAILURE);
	}
	dup2(fd[0], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(outfile);
	close(fd[0]);
	close(fd[1]);
	execute_command(path, av[3], env);
}

int	main(int ac, char **av, char **env)
{
	int		fd[2];
	pid_t	pid1;
	pid_t	pid2;

	if (ac != 5)
	{
		ft_printf(RED "WRONG NUMBER OF ARG !\n" RESET);
		exit(EXIT_FAILURE);
	}
	pipe(fd);
	pid1 = fork();
	if (pid1 == -1)
		exit(EXIT_FAILURE);
	else if (pid1 == 0)
		process_child(fd, av, env);
	pid2 = fork();
	if (pid2 == -1)
		exit(EXIT_FAILURE);
	else if (pid2 == 0)
		process_parent(fd, av, env);
	close(fd[0]);
	close(fd[1]);
	waitpid(pid1, NULL, 0);
	waitpid(pid2, NULL, 0);
	return (0);
}
