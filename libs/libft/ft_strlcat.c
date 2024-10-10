/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:25:26 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/23 19:14:28 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_length;
	size_t	j;
	size_t	ld;

	ld = ft_strlen(dest);
	if (!n)
		return (ft_strlen(src));
	if (n <= ft_strlen(dest))
		return (n + ft_strlen(src));
	dest_length = ft_strlen(dest);
	j = 0;
	while (src[j] && dest_length + 1 < n)
	{
		dest[dest_length] = src[j];
		dest_length++;
		j++;
	}
	dest[dest_length] = '\0';
	return (ld + ft_strlen(src));
}

/*
#include <stdio.h>

int main()
{
	char str1[8] = "test";
	char *str2 = "debile";

	printf("%zu\n%s",ft_strlcat(str1, str2, sizeof(str1)), str1);

}*/