/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:41:28 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/17 12:24:01 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if ((char *)src < ((char *)dst))
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	else
		ft_memcpy((char *)dst, (char *)src, n);
	return ((char *)dst);
}
