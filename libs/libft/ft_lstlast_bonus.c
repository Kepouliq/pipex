/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:57:32 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 16:07:25 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
#include<stdio.h>

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

	saarahfermelabordele = ft_lstlast(saarahfermelabordele);
	printf("%s", (char *)saarahfermelabordele->content);

	return (0);
}*/