/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:10:19 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/28 11:50:24 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char const *s, char c)
{
	int word;
	int i;

	word = 0;
	i = 0;
	if (!s || s[0] == '\0')
		return (0);
	if ((s[0] != c) && ft_isascii(s[0]) == 1)
		word++;
	while ((s[i]) && ft_isascii(s[i]) == 1)
	{
		if (s[i] == c)
		{
			if ((s[i + 1] != c) && s[i + 1])
				word++;
		}
		i++;
	}
	return (word);
}
