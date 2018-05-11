/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 18:58:29 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/29 19:24:31 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*firstlist;
	t_list	*nextlist;

	firstlist = *alst;
	while (firstlist)
	{
		nextlist = firstlist->next;
		ft_lstdelone(&firstlist, del);
		firstlist = nextlist;
	}
	*alst = NULL;
}
