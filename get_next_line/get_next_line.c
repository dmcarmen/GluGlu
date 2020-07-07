#include "get_next_line.h"

static int	clear_line(char **static_buf, char **line)
{
	char	*rest;
	char	*aux;
	
	if (!(rest = ft_strchr(*static_buf, "\n")))
	{
		*rest = 0;
		*line = strdup(*static_buf);
		aux = strdup(++rest)
		free(*static_buf);
		*static_buf = aux;
	}
	else
	{	
		if (!*static_buf)
			*line = ft_strdup("");
		else
			*line = *static_buf;
		*static_buf = NULL;
		return (EOF);
	}
	return (NOT_EOF);
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
		if (!ft_strchr(static_buf, '\n'))
			break;
	}
	if (n_read < 0)
		return (ERROR);
	return (clear_line(&static_buf, line));
}