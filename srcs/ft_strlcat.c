/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:32:10 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/28 12:40:25 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strflen(const char *str, size_t len)
{
	size_t size;

	size = 0;
	while (size < len)
	{
		if (!str[size])
			return (size);
		size++;
	}
	return (len);
}

size_t			ft_strlcat(char *dst, const char *src, size_t max)
{
	size_t	size_dst;
	size_t	size_total;
	int		i;

	i = 0;
	size_dst = ft_strlen(dst);
	size_total = size_dst + ft_strlen((char*)src);
	if (max <= (ft_strflen(dst, max) + 1))
		return (ft_strflen(dst, max) + ft_strlen(src));
	while (src[i])
	{
		if (size_dst < max - 1)
			dst[size_dst++] = (char)src[i];
		i++;
	}
	dst[size_dst] = '\0';
	return (size_total);
}
