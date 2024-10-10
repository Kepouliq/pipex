/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 14:37:42 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/01 16:14:17 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	len = nmemb * size;
	if (nmemb != 0 && len / nmemb != size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
#include <stdio.h>

int main()
{
	int *array;
	size_t num_elements = 5;
	size_t element_size = sizeof(int);

	// Allocation de mémoire pour un tableau de 5 entiers
	array = (int *)ft_calloc(num_elements, element_size);

	// Vérification de l'allocation
	if (array == NULL)
	{
		printf("L'allocation de mémoire a échoué.\n");
		return 1;
	}

	// Affichage des valeurs initialisées
	printf("Valeurs du tableau après ft_calloc:\n");
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]);
	}

	// Libération de la mémoire allouée
	free(array);

	return 0;
}*/