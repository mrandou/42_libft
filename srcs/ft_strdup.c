/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:57:44 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/13 17:53:45 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	char	*dst;

	size = 0;
	while ((char)src[size])
		size++;
	if (!(dst = (char*)malloc(sizeof(*src) * (size + 1))))
		return (0);
	ft_strcpy(dst, (char*)src);
	return (dst);
}
