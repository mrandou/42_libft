/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 18:34:12 by mrandou           #+#    #+#             */
/*   Updated: 2018/05/03 18:03:06 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_mprintf(char *type, void *v1, void *v2, void *v3)
{
	int n_fd;

	n_fd = 1;
	if (!type)
		return ;
	if (ft_strchr(type, '0'))
		n_fd = 0;
	if (ft_strchr(type, '2'))
		n_fd = 2;
	if (type[0] == 's')
		ft_putstr_fd((char *)v1, n_fd);
	if (type[0] == 'd')
		ft_putnbr_fd((int)v1, n_fd);
	if (type[1] == 's')
		ft_putstr_fd((char *)v2, n_fd);
	if (type[1] == 'd')
		ft_putnbr_fd((int)v2, n_fd);
	if (type[2] == 's')
		ft_putstr_fd((char *)v3, n_fd);
	if (type[2] == 'd')
		ft_putnbr_fd((int)v3, n_fd);
	if (ft_strchr(type, '\n'))
		ft_putbn();
}
