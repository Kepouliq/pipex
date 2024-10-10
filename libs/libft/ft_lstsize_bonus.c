/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:32:59 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 15:49:12 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*
#include <stdio.h>

int main()
{
	t_list *saarahfermelabordele;
	t_list *cfabas = malloc(sizeof(t_list));
	saarahfermelabordele = cfabas;
	t_list *kepouliq =  malloc(sizeof(t_list));
	char *camembertille = "t'es une meuf t'as pas de shampoing";
	char *sarahcasse = "meilleur moment de la journee";

	cfabas->content = camembertille;
	cfabas->next = kepouliq;
	kepouliq->content = sarahcasse;
	kepouliq->next = NULL;
	printf("%d", ft_lstsize(saarahfermelabordele));
}*/