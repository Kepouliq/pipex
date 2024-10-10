/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 17:48:27 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 18:10:01 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>

void fct(void *content)
{
	char *c = (char *)content;

	if (*c >= 97 && *c <= 122)
	{
		*c -= 32;
	}
	else if (*c >= 65 && *c <= 90)
	{
		*c += 32;
	}
	
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
	
	char *un = malloc(sizeof(char));
	char *deux = malloc(sizeof(char));
	char *letroisieme = malloc(sizeof(char));
	char *quatre = malloc(sizeof(char));
	
	*un = 'u';
	*deux = 'd';
	*letroisieme = 't';
	*quatre = 'q';
	
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
	ft_lstiter(teute, fct);
	printlist(teute);
	
	return (0);
}*/
