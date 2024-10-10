/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:14:34 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 18:34:35 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*resultf;
	t_list	*newnode;
	t_list	*newlist;

	newlist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		resultf = f(lst->content);
		newnode = ft_lstnew(resultf);
		if (!newnode)
		{
			del(resultf);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}

/*
#include <stdio.h>

void delnode(void *content)
{
	free(content);
}


void	*fct(void *content)
{
	int	    i;
	char	*new_str;

	i = 0;
	new_str = ft_strdup((char *)content);
	if (!new_str)
		return (NULL);
	while (new_str[i])
	{
		if (new_str[i] >= 'a' && new_str[i] <= 'z')
			new_str[i] -= 32;
		i++;
	}
	return (new_str);
}

void printlist(t_list *list)
{
	while (list)
	{
		printf("%c/", *(char *) list->content);
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
	
	char *un = malloc(sizeof(char *));
	char *deux = malloc(sizeof(char *));
	char *letroisieme = malloc(sizeof(char *));
	char *quatre = malloc(sizeof(char *));
	
	un = "un";
	deux = "deux";
	letroisieme = "trois";
	quatre = "quatre";
	
	teute = n1;
	n1->content = un;
	n1->next = n2;
	n2->content = deux;
	n2->next = n3;
	n3->content = letroisieme;
	n3->next = n4;
	n4->content = quatre;
	n4->next = NULL;
	printlist(teute);
	printlist(ft_lstmap(teute, fct, delnode));
	
	return (0);
}*/
