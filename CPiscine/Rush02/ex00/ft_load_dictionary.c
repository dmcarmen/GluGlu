/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_dictionary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 11:14:18 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:31:55 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_process_line(t_list *dict, char *line)
{
	int error;

	error = ft_validate_line(line);
	if (error == 0)
		return (2);
	else if (error == 1)
		ft_create_key_value(dict, line);
	return (0);
}

char	*ft_read_line(int fileid)
{
	int		n;
	int		eof;
	char	*buffer;

	n = 0;
	eof = 1;
	buffer = ft_get_buffer(100, NULL);
	while (eof > 0)
	{
		eof = read(fileid, buffer + n, 1);
		if (eof == 0)
		{
			free(buffer);
			return (NULL);
		}
		eof = *(buffer + n++) == '\n' ? 0 : eof;
		if (n / 100 > 0 && n % 100 == 0)
			buffer = ft_get_buffer(n + 100, buffer);
	}
	*(buffer + n) = '\0';
	return (buffer);
}

int		ft_load_dictionary(t_list *dict, char *filename)
{
	int		fileid;
	char	*line;
	int		error;

	error = 0;
	fileid = open(filename, O_RDONLY);
	if (fileid < 0)
		return (2);
	line = ft_read_line(fileid);
	while (line != NULL && error == 0)
	{
		error = ft_process_line(dict, line);
		free(line);
		line = ft_read_line(fileid);
	}
	close(fileid);
	return (error);
}
