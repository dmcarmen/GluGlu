#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# define ERROR (-1)
# define NOT_EOFILE 1
# define EOFILE 0

int		get_next_line(int fd, char **line);

/*
** utils
*/

char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
