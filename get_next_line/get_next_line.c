#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char	*line_aux;
	int	ret;

	line_aux = NULL;
	ret = get_next_line_rec(fd, line_aux);
	ft_strcpy(*line, line_aux);
	return (ret);
}

int	get_next_line_rec(int fd, char *line)
{
	static char	buf[BUFFER_SIZE + 1] = {0};
	int		ret;
	int		pos;
	char		*aux;

	if (buf[0] == 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
			return (ERROR);
		else if (ret == 0)
			return (EOFILE);
		if (ret != BUFFER_SIZE)
			ret = EOFILE;
	}
	if ((aux = ft_strchr_pos(buf, '\n', &pos)) != NULL)
	{
		line = ft_strappend(line, buf, pos); //maybe + 1
		ft_strcpy(buf, aux);
		// el 0 jeje
		return (NOT_EOFILE);
	}
	else
	{
		line = ft_strappend(line, buf, BUFFER_SIZE); //BUFFERSIZE maybe no
		ft_memset(buf, 0, BUFFER_SIZE);
		return (get_next_line_rec(fd, line));
	}
}
