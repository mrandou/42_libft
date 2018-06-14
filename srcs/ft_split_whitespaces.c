/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:25:28 by mrandou           #+#    #+#             */
/*   Updated: 2018/05/31 15:36:40 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdupcpy(char *src, int j)
{
	int		size;
	char	*sw;
	int		i;
	int		k;

	size = 0;
	k = j;
	i = 0;
	while (src[k] && src[k] != ' ' && src[k] != '\t' && src[k] != '\n')
	{
		size++;
		k++;
	}
	if (!(sw = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (i < size)
		sw[i++] = src[j++];
	sw[i] = '\0';
	return (sw);
}

int		wordcount(char *str)
{
	int i;
	int j;
	int word;

	word = 0;
	i = 0;
	j = 1;
	if ((str[0] != ' ') && (str[0] != '\t') && (str[0] != '\n') && str[0])
		word++;
	while (str[i])
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			if (str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j])
				word++;
		}
		i++;
		j = i + 1;
	}
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		t;
	char	**tab;
	int		word;

	word = wordcount(str);
	i = 0;
	t = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (word + 1))))
		return (NULL);
	while (t < word)
	{
		while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n'))
			i++;
		if ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\n'))
			if (!(tab[t] = ft_strdupcpy(str, i)))
				return (NULL);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		t++;
	}
	tab[t] = NULL;
	return (tab);
}
