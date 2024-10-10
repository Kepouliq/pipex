/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kepouliq <kepouliq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:55:08 by kepouliq          #+#    #+#             */
/*   Updated: 2024/06/01 18:35:33 by kepouliq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_combiebdemotsdanslastring(char const *lafameusestring, char sep)
{
	int	indexdelafameusestring;
	int	lenombrefinaldemotarenvoyer;

	indexdelafameusestring = 0;
	lenombrefinaldemotarenvoyer = 0;
	while (lafameusestring[indexdelafameusestring])
	{
		if (lafameusestring[indexdelafameusestring] != sep
			&& (lafameusestring[indexdelafameusestring + 1] == sep
				|| lafameusestring[indexdelafameusestring + 1] == '\0'))
		{
			lenombrefinaldemotarenvoyer += 1;
		}
		indexdelafameusestring++;
	}
	return (lenombrefinaldemotarenvoyer);
}

static char	**free_tab(char **tab, int tab_count)
{
	while (tab_count >= 0)
	{
		free(tab[tab_count]);
		tab_count--;
	}
	free(tab);
	return (NULL);
}

static char	**ft_tab_feed(char const *s, char c, char **tab)
{
	int	i;
	int	j;
	int	tab_count;

	i = 0;
	tab_count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			tab[tab_count] = ft_substr(s, i, j);
			if (tab[tab_count] == NULL)
				return (free_tab(tab, tab_count - 1));
			i += j;
			tab_count++;
		}
	}
	tab[tab_count] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *)
			* (ft_combiebdemotsdanslastring(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = ft_tab_feed(s, c, tab);
	if (!tab)
		return (NULL);
	return (tab);
}
/*
#include <stdio.h>

int main()
{
	char *str = "kelianetsarah!";
	char sep = ' ';
	char **tab = ft_split(str, sep);
	int sarh = 0;
	printf("%d\n", ft_combiebdemotsdanslastring(str, sep));
	while (tab[sarh])
	{
		printf("%s\n", tab[sarh]);
		sarh++;
	}
	free_tab(tab, sarh - 1);
	return(0); //dedi sarah
}*/