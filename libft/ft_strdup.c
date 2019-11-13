#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*aux;

	aux = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aux)
		return (NULL);
	return (ft_strcpy(aux, s));
}
