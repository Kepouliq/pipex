/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:13:51 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/25 16:32:07 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s + ft_strlen(s);
	while (end >= s)
	{
		if (*end == (char)c)
			return ((char *)end);
		end --;
	}
	return (0);
}

/*
#include <stdio.h>

int main()
{
	const char *test = "ya pas wesh";

	printf("%s", ft_strrchr(test, 'a'));
	return (0);
}*/