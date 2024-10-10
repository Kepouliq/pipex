/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:58:46 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/05 17:59:54 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_ptr(unsigned long long ptr, char *base)
{
	if (ptr >= 16)
		print_ptr(ptr / 16, base);
	ft_putchar(base[ptr % 16]);
}

int	put_ptr(void *ptr)
{
	unsigned long long	val_ptr;
	int					len;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	val_ptr = (unsigned long long)ptr;
	write (1, "0x", 2);
	len = 2;
	print_ptr(val_ptr, "0123456789abcdef");
	len += length_nb(val_ptr, 16);
	return (len);
}
