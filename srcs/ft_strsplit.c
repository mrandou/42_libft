/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:12:19 by mrandou           #+#    #+#             */
/*   Updated: 2018/05/17 17:29:16 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		k;
	int		i;
	int		cpt;
	char	**tab;

	i = 0;
	k = 0;
	cpt = 0;
	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char*) * (ft_countword(s, c) + 1))))
		return (NULL);
	while (k < ft_countword(s, c))
	{
		while (s[i] == c)
			i++;
		while (s[cpt + i] != c && s[cpt + i])
			cpt++;
		if (!(tab[k++] = ft_strrec(s, i, cpt + i)))
			return (NULL);
		i = cpt + i;
		cpt = 0;
	}
	tab[k] = 0;
	return (tab);
}
