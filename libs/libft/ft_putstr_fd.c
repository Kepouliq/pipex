/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:18:04 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 16:34:51 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ((void) NULL);
	while (*s)
		write(fd, s++, 1);
}

/*
#include <fcntl.h>

int main()
{
	int fd;
	char *s = "coucou";

	fd = open("text.txt", O_TRUNC | O_CREAT | O_RDWR, 0640);
	ft_putstr_fd(s,fd);
	return(0);
}*/