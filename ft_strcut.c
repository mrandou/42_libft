/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 16:13:38 by mrandou           #+#    #+#             */
/*   Updated: 2018/04/26 16:24:41 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(char *src, int start, int end)
{
	int		i;

	i = 0;
	while (start < end && src[start])
		src[i++] = src[start++];
	src[i] = '\0';
	return (src);
}
