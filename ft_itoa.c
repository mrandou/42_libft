/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:06:10 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/28 12:39:57 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		neg_value(int value)
{
	if (value < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int nb)
{
	char	*str;
	int		mod;
	int		i;
	int		isneg;

	mod = 0;
	i = 0;
	isneg = neg_value(nb);
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = ft_strnew(ft_nblen(nb) + neg_value(nb))))
		return (NULL);
	if (isneg == 1)
		nb = nb * -1;
	while (nb >= 10)
	{
		mod = nb % 10;
		nb = nb / 10;
		str[i++] = mod + '0';
	}
	str[i] = nb + '0';
	if (isneg == 1)
		str[i + 1] = '-';
	return (ft_strrev(str));
}
