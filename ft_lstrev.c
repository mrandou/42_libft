/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:09:50 by mrandou           #+#    #+#             */
/*   Updated: 2017/12/07 16:20:18 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstrev(t_list *lst, t_list *prev)
{
	t_list		*tmp;

	tmp = lst;
	if (lst->next)
		tmp = ft_lstrev(lst->next, lst);
	lst->next = prev;
	return (tmp);
}
