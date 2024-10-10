/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:56:28 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/20 18:35:04 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*start;

	start = s;
	while (n)
	{
		*start = c;
		start++;
		n--;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
	char buffer1[20];
	char buffer2[20];
	
	// Initialiser les buffers avec des valeurs différentes
	memset(buffer1, 'X', sizeof(buffer1));
	memset(buffer2, 'X', sizeof(buffer2));

	// Utilisation de la fonction memset standard
	memset(buffer1, 'A', 10);

	// Utilisation de votre fonction ft_memset
	ft_memset(buffer2, 'A', 10);

	// Affichage des résultats
	printf("Standard memset: %.*s\n", 20, buffer1);
	printf("Custom ft_memset: %.*s\n", 20, buffer2);

	// Comparaison des résultats
	if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0) {
		printf("Test passed: Both buffers are identical.\n");
	} else {
		printf("Test failed: Buffers are different.\n");
	}

	return 0;
}
*/