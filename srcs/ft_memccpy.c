/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 14:02:18 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/27 15:45:30 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	size_t		i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len)
	{
		((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		if (((const unsigned char *)src)[i] == (unsigned char)c)
			return ((unsigned char *)dst + i + 1);
		i++;
	}
	return (0);
}
