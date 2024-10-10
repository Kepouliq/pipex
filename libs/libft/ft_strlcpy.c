/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:21:03 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/23 17:41:24 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
		return (len);
	while (size > 1 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (len);
}

/*
#include <stdio.h>

int main() {
	char src[] = "Hello, world!";
	char dest[20];

	// Copie de la chaîne src dans dest
	size_t copied = ft_strlcpy(dest, src, sizeof(dest));

	// Affichage du résultat
	printf("Copied string: %s\n", dest);
	printf("Length of copied string: %zu\n", copied);

	return 0;
}*/
