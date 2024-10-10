/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 13:46:41 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 18:14:55 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	else if (n == 0)
		return (1);
	else if (n < 0 && n > -2147483648)
	{
		size ++;
		n = -n;
	}
	while (n >= 1)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int	ft_signe(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	int				signe;
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	size = ft_size(n);
	signe = ft_signe(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size--)
	{
		str[size] = (nb % 10) + '0';
		nb /= 10;
	}
	if (signe)
		str[0] = '-';
	return (str);
}

/*
#include <stdio.h>

int main()
{
	int nb = -2147483648;

	printf("%s", ft_itoa(nb));   
}*/