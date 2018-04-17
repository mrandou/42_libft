/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:15:14 by mrandou           #+#    #+#             */
/*   Updated: 2018/02/26 17:16:19 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstlen(t_list *list)
{
	int	size;

	size = 0;
	while (list)
	{
		size = size + list->content_size;
		list = list->next;
	}
	return (size);
}
