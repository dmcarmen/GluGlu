#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*aux;

	aux = (void*)malloc(nmeb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, nmeb * size);
	return (aux);
}
