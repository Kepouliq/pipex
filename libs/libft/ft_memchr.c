/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:49:07 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 15:01:39 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char) c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h> 
#include <string.h>

int main()
{
	const char str[] = "Hello, world!";
	char *result;

	result = ft_memchr(str, 'w', strlen(str));
	if (result != NULL)
		printf("Found 'w' at position: %ld\n", result - str);
	else
		printf("'o' not found\n");

	result = ft_memchr(str, 'z', strlen(str));
	if (result != NULL)
		printf("Found 'z' at position: %ld\n", result - str);
	else
		printf("'z' not found\n");

	result = ft_memchr(str, '\0', strlen(str) + 1);
	if (result != NULL)
		printf("Found null terminator at position: %ld\n", result - str);
	else
		printf("Null terminator not found\n");

	return 0;
}*/