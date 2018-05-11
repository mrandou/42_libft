/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 17:26:20 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/28 13:31:37 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		size;
	int		k;
	char	*tmp;

	if (!s)
		return (NULL);
	size = ft_strlen((char *)s) - 1;
	k = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[size] == ' ' || s[size] == '\n' || s[size] == '\t')
		size--;
	if (size < 0)
		size = i;
	if (!(tmp = ft_strnew(size - i + 1)))
		return (NULL);
	while (i <= size)
		tmp[k++] = s[i++];
	tmp[k] = '\0';
	return (tmp);
}
