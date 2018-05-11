/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countoc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:23:46 by mrandou           #+#    #+#             */
/*   Updated: 2018/04/17 14:35:02 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countoc(char *str, char oc)
{
	int	count;
	int	i;

	i = 0;
	if (!str || !oc)
		return (0);
	count = 0;
	while (str[i])
	{
		if (str[i] == oc)
			count++;
		i++;
	}
	return (count);
}
