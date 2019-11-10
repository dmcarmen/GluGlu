#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = (const unsigned char*)s1;
	ps2 = (const unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		else
			i++;
	}
	return (0);
}
