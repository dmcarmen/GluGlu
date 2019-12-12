#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# define ERROR -1
# define NOT_EOFILE 1
# define EOFILE 0

int	get_next_line(int fd, char **line);
int	get_next_line_rec(int fd, char *line);

/*
** utils
*/

char	*ft_strappend(char *s1, char *s2, int n);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strchr_pos(const char *s, int c, int *pos);

#endif
