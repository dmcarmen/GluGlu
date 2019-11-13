#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char*)dest;
	psrc = (const unsigned char*)src;
	if (psrc < pdest)
	{
		i = 0;
		while (i < n)
		{
			pdest[n - i - 1] = psrc[n - i - 1];
			i++;
		}
	}	
	else
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (dest);
}
