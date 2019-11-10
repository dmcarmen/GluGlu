#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
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
