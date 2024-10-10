/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:30:22 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/23 16:51:02 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;

	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (NULL);
	littlelen = ft_strlen(little);
	while (*big && len >= littlelen)
	{
		if (ft_strncmp(big, little, littlelen) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char big[] = "Hello, world!";
	char little[] = "rl";

	printf("Test: Find '%s' in '%s'\n", little, big);
	char *result = ft_strnstr(big, little, strlen(big));
	if (result != NULL)
		printf("'%s' found at position: %ld\n", little, result - big);
	else
		printf("'%s' not found\n", little);

	return 0;
}*/