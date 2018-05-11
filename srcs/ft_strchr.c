/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:21:30 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/23 14:08:31 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int oc)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == oc)
			return ((char*)str + i);
		i++;
	}
	if (str[i] == oc)
		return ((char *)str + i);
	return (NULL);
}
