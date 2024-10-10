/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striterie.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:36:49 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 12:53:20 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

void print_index_and_char(unsigned int i, char* c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
	else if (*c >= 65 && *c <= 90)
		*c += 32;
	printf("Index %d: %c\n", i, *c);
}

int main()
{
	char str[] = "Salut TEST un DeuX!";
	ft_striteri(str, print_index_and_char);
	return 0;
}*/