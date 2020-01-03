/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrandou <mrandou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 11:53:12 by mrandou           #+#    #+#             */
/*   Updated: 2018/05/17 12:53:29 by mrandou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		one_line(const int fd, char **tab)
{
	int		rv;
	char	*tmp;
	char	*buff;

	if (!(buff = ft_strnew(BUFF_SIZE)))
		return (-1);
	rv = 1;
	while (!ft_strchr(tab[fd], '\n') && ((rv = read(fd, buff, BUFF_SIZE)) > 0))
	{
		tmp = tab[fd];
		buff[rv] = '\0';
		if (!(tab[fd] = ft_strjoin(tmp, buff)))
			return (-1);
		ft_strdel(&tmp);
	}
	ft_strdel(&buff);
	return (rv);
}

int				get_next_line(const int fd, char **line)
{
	int					return_value;
	char				*tmp;
	static char			*stab[F_OPEN_MAX];

	if ((fd < 0) || (fd > F_OPEN_MAX) || (line == NULL))
		return (-1);
	if (stab[fd] == NULL && !(stab[fd] = ft_strnew(0)))
		return (-1);
	if ((return_value = one_line(fd, stab)) == -1)
		return (-1);
	if (return_value == 0)
	{
		if (!(*line = ft_strdup(stab[fd])))
			return (-1);
		ft_strdel(&stab[fd]);
		return (!!ft_strlen(*line));
	}
	if (!(*line = ft_strsub(stab[fd], 0, ft_strchr(stab[fd], '\n') - stab[fd])))
		return (-1);
	tmp = stab[fd];
	if (!(stab[fd] = ft_strdup(ft_strchr(tmp, '\n') + 1)))
		return (-1);
	ft_strdel(&tmp);
	return (1);
}
