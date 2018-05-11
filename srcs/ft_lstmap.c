/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 19:44:41 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/29 20:22:48 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *newlist;
	t_list *tmp;
	t_list *rtrn;

	tmp = f(lst);
	if (!(newlist = ft_lstnew(tmp->content, tmp->content_size)))
		return (NULL);
	rtrn = newlist;
	lst = lst->next;
	while (lst)
	{
		tmp = f(lst);
		newlist->next = f(lst);
		if (!(newlist->next = ft_lstnew(tmp->content, tmp->content_size)))
			return (NULL);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (rtrn);
}
