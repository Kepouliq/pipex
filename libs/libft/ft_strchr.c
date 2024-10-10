/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 13:47:25 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 16:31:58 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

/*
#include <stdio.h>

int main()
{
	char test[] = "ya pas wesh";
	char *result = ft_strchr(test, '\0');
	
	if (result != NULL)
		printf("Caractère nul trouvé à la position: %ld\n", result - test);
	else
		printf("Caractère nul non trouvé\n");

	return 0;
}*/