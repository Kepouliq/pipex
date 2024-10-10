/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:01:32 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 14:10:09 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
#include <fcntl.h>

int main()
{
	int fd;

	fd = open("text.txt", O_TRUNC | O_CREAT | O_RDWR, 0640);
	ft_putchar_fd('k',fd);
	return(0);
}*/
