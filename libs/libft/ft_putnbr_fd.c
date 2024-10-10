/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 16:52:50 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 16:12:06 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	b;

	b = n;
	if (b < 0)
	{
		ft_putchar_fd('-', fd);
		b *= -1;
	}
	if (b > 9)
		ft_putnbr_fd(b / 10, fd);
	ft_putchar_fd(b % 10 + '0', fd);
}

/*
#include <fcntl.h>

int main()
{
	int test = 684;
	int fd = open("text.txt", O_TRUNC | O_CREAT | O_RDWR, 0640);


	ft_putnbr_fd(test, fd);
	return(0);
}*/