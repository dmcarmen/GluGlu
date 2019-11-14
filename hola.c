#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void *		lstmap_f(void *content) {
	(void)content;
	return ("OK !");
}

t_list	*ft_lstnew(void *content)
{
	t_list	*aux;

	aux = (t_list*)malloc(sizeof(t_list));
	if (!aux)
		return (NULL);
	aux->content = content;
	aux->next = NULL;
	return (aux);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p->next)
		p = p->next;
	return (p);
}

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	ft_lstlast(*alst)->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del || !(*lst))
		return ;
	ft_lstclear(&((*lst)->next), del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (NULL);
		}
		ft_lstadd_back(&ret, temp);
		lst = lst->next;
	}
	return (ret);
}

int main()
{
			t_list	*l = ft_lstnew(strdup(" 1 2 3 "));
			t_list	*ret;

			l->next = ft_lstnew(strdup("ss"));
			l->next->next = ft_lstnew(strdup("-_-"));
			ret = ft_lstmap(l, lstmap_f, NULL);
			if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
				printf("nice\n");
}
