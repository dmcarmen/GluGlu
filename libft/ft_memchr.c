#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ps;

	i = 0;
	ps = (unsigned char*)s;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}
