/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:31:52 by kepouliq          #+#    #+#             */
/*   Updated: 2024/05/31 17:16:27 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	start = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (start > end)
		return (ft_substr(s1, start, 0));
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "  \t \t \n   \n\n\n\t";
	char	*set = " \n\t";
	char	*trim;

	printf("Chaine s1 : %s & Chaine set : %s\n", s1, set);
        trim = ft_strtrim(s1, set);
        printf("Chaine s1 coupee : %s\n", trim);
        free(trim);
	return (0);
}*/