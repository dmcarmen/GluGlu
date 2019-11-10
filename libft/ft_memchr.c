#include "libft.h"

void *ft_memchr(void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*ps;

	ps = (const unsigned char*)s;
	i = 0;
	while (i < n && ps[i] != c)
		i++;
	if (i == n)
		return (NULL);
	return (s + i);
}
