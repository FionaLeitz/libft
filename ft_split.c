/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleitz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 10:12:40 by fleitz            #+#    #+#             */
/*   Updated: 2021/11/23 11:08:41 by fleitz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	countwords;

	i = 0;
	countwords = 0;
	if (s[0] != c && s[0] != '\0')
		countwords++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			countwords++;
		i++;
	}
	return (countwords);
}

void	ft_free(size_t j, char **tab)
{
	while (j > 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab[0]);
	free(tab);
	return ;
}

char	**ft_countchar(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	countchar;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		countchar = 0;
		while (s[i] && s[i] != c)
		{
			i++;
			countchar++;
		}
		tab[j] = (char *)malloc(sizeof(char) * (countchar + 1));
		if (tab[j] == NULL)
		{
			ft_free(j, tab);
			return (0);
		}
		j++;
	}
	return (tab);
}

char	**ft_copy(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	countchar;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		countchar = 0;
		while (s[i] && s[i] != c)
		{
			tab[j][countchar] = s[i];
			i++;
			countchar++;
		}
		tab[j][countchar] = '\0';
		j++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	countwords;

	countwords = ft_countwords(s, c);
	tab = (char **)malloc(sizeof(char *) * (countwords + 1));
	if (tab == NULL)
		return (0);
	ft_countchar(s, c, tab);
	ft_copy(s, c, tab);
	tab[countwords] = 0;
	return (tab);
}
