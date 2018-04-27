/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 18:34:12 by mrandou           #+#    #+#             */
/*   Updated: 2018/04/27 19:12:14 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mprintf(char *type, void *v1, void *v2, void *v3)
{
	if (!type)
		return ;
	if (type[0] == 's')
		ft_putstr((char *)v1);
	if (type[0] == 'd')
		ft_putnbr((int)v1);
	if (type[1] == 's')
		ft_putstr((char *)v2);
	if (type[1] == 'd')
		ft_putnbr((int)v2);
	if (type[2] == 's')
		ft_putstr((char *)v3);
	if (type[2] == 'd')
		ft_putnbr((int)v3);
	if (ft_strchr(type, '\n'))
		ft_putbn();
}
