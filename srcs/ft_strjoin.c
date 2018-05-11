/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:15:16 by mrandou           #+#    #+#             */
/*   Updated: 2018/01/11 13:48:09 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1);
	if (!(str = ft_strnew(size + ft_strlen(s2) + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	while (s2[i])
	{
		str[size + i] = s2[i];
		i++;
	}
	str[size + i] = '\0';
	return (str);
}
