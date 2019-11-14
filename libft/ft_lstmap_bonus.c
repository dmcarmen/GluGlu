#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*p;
	t_list	*aux;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	p = lst;
	while (p)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, aux);
		p = p->next;
	}
	return (ret);
}
