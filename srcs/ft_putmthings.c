/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmthings.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 16:39:19 by mrandou           #+#    #+#             */
/*   Updated: 2018/04/30 16:46:03 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmthings(char *s1, char *s2, char *s3, int i)
{
	if (!s1)
		return ;
	ft_putstr(s1);
	if (s2)
		ft_putstr(s2);
	if (s3)
		ft_putstr(s3);
	ft_putnbr(i);
	ft_putbn();
}
