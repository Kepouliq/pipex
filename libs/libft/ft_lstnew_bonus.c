/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:16:48 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/03 14:47:51 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include<stdio.h>

int main()
{
	t_list *n1;
	int sarah = 42;
	n1 = ft_lstnew(&sarah);
	printf("%d\n", *(int *)n1->content);
	free(n1);
	return (0);
}*/