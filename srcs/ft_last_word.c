/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 14:01:30 by mrandou           #+#    #+#             */
/*   Updated: 2018/01/16 14:02:49 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_last_word(char *str, char c)
{
	char	**tab;
	int		word;

	if (!(tab = ft_strsplit(str, c)))
		return (NULL);
	word = ft_countword(str, c);
	return (tab[word - 1]);
}
