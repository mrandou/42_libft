/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_one_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:01:30 by mrandou           #+#    #+#             */
/*   Updated: 2018/01/17 15:20:25 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_one_word(char *str, char c, int one)
{
	char	**tab;
	int		word;

	if (!(tab = ft_strsplit(str, c)))
		return (NULL);
	word = ft_countword(str, c);
	if (one == 0)
		return (tab[word - 1]);
	else
		return (tab[one]);
}
