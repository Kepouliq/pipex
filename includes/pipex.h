/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:01:01 by kepouliq          #+#    #+#             */
/*   Updated: 2024/09/26 18:37:32 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "ft_printf.h"
# include "libft.h"
# include <fcntl.h>
# include <sys/types.h>
# include <sys/wait.h>

# define RESET "\e[0m"
# define RED "\e[1;91m"

char	*get_path_cmd(char **path, char *cmd);
char	**get_path(char **env);

#endif
