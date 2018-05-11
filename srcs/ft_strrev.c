/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:58:41 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/16 17:26:18 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	swp;
	int		i;
	int		size;

	i = 0;
	swp = '0';
	size = ft_strlen(str);
	size--;
	while (size > i)
	{
		swp = str[i];
		str[i] = str[size];
		str[size] = swp;
		i++;
		size--;
	}
	return (str);
}
