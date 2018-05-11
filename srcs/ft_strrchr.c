/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:47:26 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/13 17:37:55 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int oc)
{
	int size;

	size = ft_strlen((char*)str);
	while (size >= 0)
	{
		if (str[size] == oc)
			return ((char*)str + size);
		size--;
	}
	return (0);
}
