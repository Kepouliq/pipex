/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:25:11 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/20 18:35:17 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*start;

	start = s;
	while (n)
	{
		*start = 0;
		start++;
		n--;
	}
}

/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer1[20];
    char buffer2[20];

    // Initialiser les buffers avec des valeurs non nulles
    memset(buffer1, 'X', sizeof(buffer1));
    memset(buffer2, 'X', sizeof(buffer2));

    // Utilisation de la fonction bzero standard
    bzero(buffer1, 10);

    // Utilisation de votre fonction ft_bzero
    ft_bzero(buffer2, 10);

    // Affichage des résultats
    printf("Standard bzero: ");
    for (size_t i = 0; i < sizeof(buffer1); i++) {
        printf("%d ", buffer1[i]);
    }
    printf("\n");

    printf("Custom ft_bzero: ");
    for (size_t i = 0; i < sizeof(buffer2); i++) {
        printf("%d ", buffer2[i]);
    }
    printf("\n");

    // Comparaison des résultats
    if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0) {
        printf("Test passed: Both buffers are identical.\n");
    } else {
        printf("Test failed: Buffers are different.\n");
    }

    return 0;
}*/
