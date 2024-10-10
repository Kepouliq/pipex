/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:28:41 by kepouliq          #+#    #+#             */
/*   Updated: 2024/10/03 16:15:29 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	**get_path(char **env)
{
	int		i;
	char	*tmp;
	char	**path;

	i = 0;
	tmp = NULL;
	while (env[i])
	{
		if (ft_strnstr(env[i], "PATH=", 5))
		{
			tmp = ft_strdup(env[i] + 5);
			break ;
		}
		i++;
	}
	path = ft_split(tmp, ':');
	if (tmp)
		free(tmp);
	if (!path)
		path = ft_split(".", ':');
	if (!path)
		exit(EXIT_FAILURE);
	return (path);
}

char	*get_path_cmd(char **path, char *cmd)
{
	int		i;
	char	*valid_path;

	cmd = ft_strjoin("/", cmd);
	if (!cmd)
		return (NULL);
	i = 0;
	while (path[i])
	{
		valid_path = ft_strjoin(path[i], cmd);
		if (!valid_path)
			return (NULL);
		if (access(valid_path, F_OK | X_OK) == 0)
			break ;
		free(valid_path);
		i++;
	}
	free(cmd);
	if (!path[i])
		return ("");
	return (valid_path);
}
