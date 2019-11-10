#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char	*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char*)dest;
	psrc = (const unsigned char*)src;
	if (psrc <= pdest - n + 1)
	{
		i = 0;
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}	
	else
	{
		i = n;
		while (i > 0)
		{
			pdest[i - 1] = psrc[i - 1];
			i--;
		}
	}
	return (dest);
}
