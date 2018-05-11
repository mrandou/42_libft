/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istoomutch.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 17:19:54 by mrandou           #+#    #+#             */
/*   Updated: 2018/03/08 17:46:02 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_istoomutch(char *src, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_strpfo(src, str[i]))
			return (str[i]);
		i++;
	}
	return (0);
}
