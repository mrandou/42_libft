/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 16:09:50 by mrandou           #+#    #+#             */
/*   Updated: 2018/04/17 17:20:38 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstrev(t_list *lst, t_list *prev)
{
	t_list		*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	if (lst->next)
		tmp = ft_lstrev(lst->next, lst);
	lst->next = prev;
	return (tmp);
}
