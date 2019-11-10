#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (dest);
}
