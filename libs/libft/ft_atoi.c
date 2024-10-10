/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:54:08 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/23 17:14:31 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signe;
	int	result;

	result = 0;
	signe = 1;
	while (*nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r' || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signe *= -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * signe);
}

/*
#include <stdio.h>

int main()
{
	char str1[] = "12345";
	char str2[] = "-67890";
	char str3[] = "+42";
	char str4[] = "   567";
	char str5[] = "abc123";
	char str6[] = "";

	printf("Test 1: \"%s\" -> %d\n", str1, ft_atoi(str1));
	printf("Test 2: \"%s\" -> %d\n", str2, ft_atoi(str2));
	printf("Test 3: \"%s\" -> %d\n", str3, ft_atoi(str3));
	printf("Test 4: \"%s\" -> %d\n", str4, ft_atoi(str4));
	printf("Test 5: \"%s\" -> %d\n", str5, ft_atoi(str5));
	printf("Test 6: \"%s\" -> %d\n", str6, ft_atoi(str6));

	return 0;
}*/