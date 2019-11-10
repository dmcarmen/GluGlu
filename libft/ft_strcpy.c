#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}
