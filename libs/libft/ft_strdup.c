/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:44:52 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 16:10:23 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		s_len;
	char	*ptr_start;

	s_len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (s_len + 1));
	if (!ptr)
		return (NULL);
	ptr_start = ptr;
	while (*s)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (ptr_start);
}

/*
#include <stdio.h>

int main()
{
	const char *original = "Bonjour le monde !";
	char *duplicate;

	// Duplique la chaîne
	duplicate = ft_strdup(original);

	// Vérifie si la duplication a réussi
	if (duplicate == NULL)
	{
		printf("L'allocation de mémoire a échoué.\n");
		return 1;
	}

	// Affiche la chaîne originale et sa duplication
	printf("Chaîne originale : %s\n", original);
	printf("Chaîne dupliquée : %s\n", duplicate);

	// Libère la mémoire allouée pour la chaîne dupliquée
	free(duplicate);

	return 0;
}*/