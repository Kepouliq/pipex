/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:37:42 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 17:27:05 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
	return ;
}
/*
void delnode(void *content)
{
	free(content);
}

#include<stdio.h>

void printlist(t_list *list)
{
	while (list)
	{
		printf("%s/", (char *)list->content);
		list = list->next;
	}
	printf("\n");
}

int main()
{

	t_list  *teute;
	t_list *n1 = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	t_list *n4 = malloc(sizeof(t_list));
	char *un = "un";
	char *deux = "deux";
	char *letroisieme = "letroisieme";
	char *quatre = "quatre";
	
	teute = n1;
	n1->content = ft_strdup(un);
	n1->next = n2;
	n2->content = ft_strdup(deux);
	n2->next = n3;
	n3->content = ft_strdup(letroisieme);
	n3->next = n4;
	n4->content = ft_strdup(quatre);
	n4->next = NULL;
	printlist(teute);
	ft_lstdelone(n2, delnode);
	n1->next = n3;
	printlist(teute);
	t_list *temp;
	while (teute)
	{
		temp = teute->next;
		ft_lstdelone(teute,delnode);
		teute = temp;
	}
	
	return (0);
}*/
