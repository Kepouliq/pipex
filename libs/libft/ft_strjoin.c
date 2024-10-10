/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:55:02 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 19:41:10 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_str;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	final_str = (char *)malloc(sizeof(char)
			* (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!final_str)
		return (NULL);
	i = 0;
	while (*s1)
	{
		final_str[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		final_str[i] = *s2;
		s2++;
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}
/*
#include <stdio.h>

int main()
{
	char *s1 = "couscous";
	char *s2 = "tajine";
	printf("%s", ft_strjoin(s1, s2));
	return (0); //dedi srh
}*/