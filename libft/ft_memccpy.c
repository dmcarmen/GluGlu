#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char*)dest;
	psrc = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (psrc[i] == c)
			return ((void*)(dest + i+ 1));
		i++;
	}
	return (NULL);
}
