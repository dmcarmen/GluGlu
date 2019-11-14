#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*p;
	int	i;

	if (!lst)
		return (0);
	i = 1;
	p = lst->next;
	while (p)
	{
		p = p->next;
		i++;
	}
	return (i);
}
