/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:28:46 by cdiez-me          #+#    #+#             */
/*   Updated: 2020/07/07 16:56:57 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	clear_buffer(char **static_buf, char **line)
{
	char	*rest;
	char	*aux;

	if (!*static_buf)
	{
		*line = ft_strdup("");
		return (EOFILE);
	}
	if ((rest = ft_strchr(*static_buf, '\n')))
	{
		*rest = 0;
		*line = ft_strdup(*static_buf);
		aux = ft_strdup(++rest);
		free(*static_buf);
		*static_buf = aux;
		return (NOT_EOFILE);
	}
	else
	{
		*line = *static_buf;
		*static_buf = NULL;
		return (EOFILE);
	}
}

int			get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*static_buf;
	int			n_read;
	char		*aux;
	
	if (fd < 0 || BUFFER_SIZE < 1 || !line)
		return (ERROR);
	while ((n_read = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[n_read] = 0;
		if (!static_buf)
			static_buf = ft_strdup(buf);
		else
		{
			aux = ft_strjoin(static_buf, buf);
			free(static_buf);
			static_buf = aux;
		}
		if (ft_strchr(static_buf, '\n'))
			break ;
	}
	if (n_read < 0)
		return (ERROR);
	return (clear_buffer(&static_buf, line));
}
