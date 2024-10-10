/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 13:47:05 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/22 15:17:34 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (s > d)
	{
		while (n)
		{
			*d++ = *s++;
			n--;
		}
	}
	else if (s < d)
	{
		d += n;
		s += n;
		while (n)
		{
			*--d = *--s;
			n--;
		}		
	}
	return (dest);
}

/*
#include <stdio.h>

int main() {
	char src[] = "Hello, World!";
	char dest[10];

	// Copie de src vers dest avec ft_memmove
	ft_memmove(dest, src, ft_strlen(src) + 1);

	// Affichage du résultat
	printf("Result with ft_memmove: %s\n", dest);

	return 0;
}*/