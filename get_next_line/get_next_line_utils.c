#include "get_next_line.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i++ < n)
		dst[i - 1] = 0;
	return (dst);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*ft_strappend(char *s1, char *s2, int n)
{
	char *aux;

	aux = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!aux)
		return (NULL);
	ft_strcpy(aux, s1);
	ft_strncpy(aux + ft_strlen(s1), s2, n);
	aux[ft_strlen(s1) + n + 1] = 0;
	free(s1); //no se si alguien mas
	return (aux);
}

char	*ft_strchr_pos(const char *s, int c, int *pos)
{
	*pos = 0;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
		(*pos)++;
	}
	if (c == 0)
	{
		*pos = 0;
		return ((char *)s);
	}
	return (NULL);
}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	ps = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		ps[i] = c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
