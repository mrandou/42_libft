/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvisible.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:55:13 by mrandou           #+#    #+#             */
/*   Updated: 2018/09/04 12:10:28 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isvisible(char *str)
{
	int i;

	i = 0;
	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
	|| str[i] == '\v' || str[i] == '\f')
			return (0);
		i++;
	}
	return (1);
}
