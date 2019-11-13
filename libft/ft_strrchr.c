#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == c)
			aux = (char *)s;
		s++;
	}
	if (aux)
		return (aux);
	if (c == 0)
		return ((char*)s);
	return (NULL);
}
