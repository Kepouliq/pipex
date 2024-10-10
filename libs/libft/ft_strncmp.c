/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:49:03 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 15:17:36 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>

int main()
{
	char str1[] = "Hello, world!";
	char str2[] = "Hello, vorld!";
	char str3[] = "Hello, world!";
	char str4[] = "Hello,";
	
	printf("Comparing '%s' and '%s' for first 5 characters: %d\n",
	 str1, str2, ft_strncmp(str1, str2, 5));  
	printf("Comparing '%s' and '%s' for first 7 characters: %d\n", 
	 str1, str2, ft_strncmp(str1, str2, 8));
	printf("Comparing '%s' and '%s' for first 13 characters: %d\n",
	 str1, str3, ft_strncmp(str1, str3, 13));
	printf("Comparing '%s' and '%s' for first 7 characters: %d\n",
	 str1, str4, ft_strncmp(str1, str4, 7));
	
	return 0;
}*/