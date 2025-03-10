/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 15:48:38 by mrandou           #+#    #+#             */
/*   Updated: 2018/05/16 13:25:45 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrec(char const *s, unsigned int start, unsigned int end)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (end < start)
		start = end;
	if (!(str = ft_strnew(end - start)))
		return (NULL);
	while ((start < end) || str[i])
		str[i++] = ((char *)s)[start++];
	str[i] = '\0';
	return (str);
}
