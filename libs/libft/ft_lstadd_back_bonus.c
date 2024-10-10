/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:13:43 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/05 12:21:20 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

/*
#include<stdio.h>

void printlist(t_list *list)
{
	while (list)
	{
		printf("%d", *(int *)list->content);
		list = list->next;
	}
	printf("\n");
}

int main()
{

	t_list  *teute;
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3;
	int un = 1;
	int deux = 2;
	int letroisieme = 3;
	
	teute = n1;
	n1->content = &un;
	n1->next = n2;
	n2->content = &deux;
	n2->next = NULL;
	n3 = ft_lstnew(&letroisieme);
	printlist(teute);
	ft_lstadd_back(&teute, n3);
	printlist(teute);
	free(n1);
	free(n2);
	free(n3);
	return (0);
}*/
