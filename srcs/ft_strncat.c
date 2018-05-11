/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:21:46 by mrandou           #+#    #+#             */
/*   Updated: 2017/11/22 13:35:25 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t delim)
{
	size_t k;
	size_t size;

	k = 0;
	size = ft_strlen(s1);
	while ((s2[k]) && k < delim)
		s1[size++] = s2[k++];
	s1[size] = '\0';
	return (s1);
}
