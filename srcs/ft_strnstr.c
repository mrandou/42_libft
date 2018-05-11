/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:02:01 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/23 13:29:35 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *find, size_t delim)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	size = 0;
	j = 0;
	size = ft_strlen((char*)find);
	if (size == 0)
		return ((char*)s1);
	while (((char)s1[i]) && i < delim)
	{
		while (((char)find[j] == (char)s1[i + j] && (i + j < delim)))
		{
			if (j == size - 1)
				return ((char*)s1 + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
