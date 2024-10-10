/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:44:00 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 15:09:32 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*fdest;
	const char	*fsrc;
	size_t		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	fdest = dest;
	fsrc = src;
	while (i < n)
	{
		fdest[i] = fsrc[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

// Prototypage de votre fonction
void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
	char src[20] = "Hello, world!";
	char dest1[20];
	char dest2[20];

	// Initialiser les buffers de destination avec des valeurs non nulles
	memset(dest1, 'X', sizeof(dest1));
	memset(dest2, 'X', sizeof(dest2));

	// Utilisation de la fonction memcpy standard
	memcpy(dest1, src, strlen(src) + 1); // +1 pour inclure le caractère nul

	// Utilisation de votre fonction ft_memcpy
	ft_memcpy(dest2, src, strlen(src) + 1);

	// Affichage des résultats
	printf("Source: %s\n", src);
	printf("Standard memcpy: %s\n", dest1);
	printf("Custom ft_memcpy: %s\n", dest2);

	// Comparaison des résultats
	if (memcmp(dest1, dest2, sizeof(dest1)) == 0) {
		printf("Test passed: Both destinations are identical.\n");
	} else {
		printf("Test failed: Destinations are different.\n");
	}

	return 0;
} */