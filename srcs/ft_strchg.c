/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 17:37:40 by mrandou           #+#    #+#             */
/*   Updated: 2018/09/12 17:37:56 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchg(char *str, char *old, char *new)
{
	char	*tmp;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!str || !old || !new)
		return (NULL);
	if (!(tmp = ft_strnew(ft_strlen(str) - ft_strlen(old) + ft_strlen(new))))
		return (NULL);
	while (str[k] && ft_strstr(&str[k + 1], old))
		tmp[i++] = str[k++];
	if (!(new = ft_strjoin(tmp, new)))
		return (NULL);
	ft_strdel(&tmp);
	if (str[k])
		if (!(tmp = ft_strjoin(new, ft_strstr(str, old) + ft_strlen(old))))
			return (NULL);
	ft_strdbldel(&str, &new);
	return (tmp);
}
