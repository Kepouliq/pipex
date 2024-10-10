/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:23:51 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 17:47:35 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*cur;

	if (*lst && del)
	{
		cur = *lst;
		while (cur)
		{
			temp = cur->next;
			del(cur->content);
			free(cur);
			cur = temp;
		}
		*lst = NULL;
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
	ft_lstclear(&teute, delnode);
	printlist(teute);
	
	return (0);
}*/
