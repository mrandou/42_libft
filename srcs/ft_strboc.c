/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strboc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:28:50 by mrandou           #+#    #+#             */
/*   Updated: 2018/01/09 15:33:02 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strboc(char *str, int oc)
{
	int		i;
	int		cpt;
	char	*rslt;

	i = 0;
	cpt = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] != oc)
			cpt++;
		i++;
	}
	if (!(rslt = ft_strsub(str, 0, cpt)))
		return (NULL);
	return (rslt);
}
