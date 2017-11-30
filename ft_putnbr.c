/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 11:42:09 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/15 13:48:44 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
			ft_putstr("-2147483648");
		if (nb > -2147483648)
		{
			ft_putchar('-');
			nb = nb * (-1);
		}
	}
	if ((nb >= 0) && (nb <= 9))
		ft_putchar(nb + '0');
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
