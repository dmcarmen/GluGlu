#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*aux;

	aux = (t_list*)malloc(sizeof(t_list));
	if (!aux)
		return (NULL);
	aux->content = content;
	aux->next = NULL;
	return (aux);
}
