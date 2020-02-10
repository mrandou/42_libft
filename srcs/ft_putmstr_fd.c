/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 17:32:05 by mrandou           #+#    #+#             */
/*   Updated: 2020/02/10 17:32:29 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmstr_fd(const char *str, int fd, int max)
{
	int i;

	i = 0;
	while (str[i] && i < max)
		ft_putchar_fd(str[i++], fd);
}
