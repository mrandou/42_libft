/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 14:17:47 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/13 18:03:35 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *find)
{
	int i;
	int j;
	int size;

	i = 0;
	size = 0;
	j = 0;
	size = ft_strlen((char*)find);
	if (size == 0)
		return ((char*)s1);
	while ((char)s1[i])
	{
		while ((char)find[j] == (char)s1[i + j])
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
