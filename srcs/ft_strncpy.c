/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:26:03 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/22 13:37:42 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (((char)src[i]) && (i < len))
	{
		dst[i] = (char)src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}
