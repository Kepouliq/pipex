/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:46:47 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/05 18:36:22 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length_nb(size_t nb, size_t base)
{
	int		len;
	size_t	nbr;

	len = 1;
	nbr = nb;
	if (nbr < 0)
	{
		nbr = -nbr;
		len += 1;
	}
	while (nbr >= base)
	{
		nbr /= base;
		len += 1;
	}
	return (len);
}

int	put_int(int nb)
{
	long	nbr;
	size_t	len;

	len = 0;
	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
		len++;
	}
	if (nbr >= 10)
		put_int(nbr / 10);
	ft_putchar(nbr % 10 + '0');
	return (length_nb(nbr, 10) + len);
}

int	put_hexabase(int nb, char *base)
{
	long	nbr;
	int		len;

	if (nb < 0)
	{
		nbr = 4294967295 + nb + 1;
		len = length_nb(nbr, 16);
	}
	else
	{
		nbr = nb;
		len = length_nb(nbr, 16);
	}
	if (nbr >= 16)
		put_hexabase(nbr / 16, base);
	ft_putchar(base[nbr % 16]);
	return (len);
}

int	put_unsigne(int nb)
{
	long	nbr;
	int		len;

	if (nb < 0)
	{
		nbr = 4294967295 + nb + 1;
		len = length_nb(nbr, 10);
	}
	else
	{
		nbr = nb;
		len = length_nb(nbr, 10);
	}
	if (nbr >= 10)
		put_unsigne(nbr / 10);
	ft_putchar(nbr % 10 + '0');
	return (len);
}
