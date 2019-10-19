/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:48:56 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/19 22:18:26 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*list_ini(void)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->node = NULL;
	return (l);
}

void	list_free(t_list *l)
{
	if (l)
		while (!list_is_empty(l))
		{
			list_extract_first(l);
		}
	free(l);
}

int		list_insert_last(t_list *l, char *nb, char *nbwr)
{
	t_node_list	*pn;
	t_node_list	*qn;

	if (!l)
		return (0);
	pn = (t_node_list*)malloc(sizeof(t_node_list));
	pn->next = NULL;
	pn->nb = nb;
	pn->nbwr = nbwr;
	if (list_is_empty(l))
	{
		l->node = pn;
		return (1);
	}
	qn = l->node;
	while (qn->next != NULL)
		qn = qn->next;
	qn->next = pn;
	return (1);
}

void	list_extract_first(t_list *l)
{
	t_node_list	*pn;

	if (!list_is_empty(l))
	{
		pn = l->node;
		l->node = pn->next;
		free(pn);
	}
}

int		list_is_empty(const t_list *l)
{
	if (!l || !l->node)
		return (1);
	return (0);
}

char	*list_get_nbwr(const t_list *l, char *nb)
{
	t_node_list	*qn;

	if (list_is_empty(l))
		return (NULL);
	qn = l->node;
	while (qn)
	{
		if (ft_strcmp(qn->nb, nb) == 0)
			return (qn->nbwr);
		qn = qn->next;
	}
	return (NULL);
}

void	list_print(t_list *l)
{
	t_node_list *qn;

	qn = l->node;
	while (qn != NULL)
	{
		printf("%s %s", qn->nb, qn->nbwr);
		printf("\n");
		qn = qn->next;
	}
}
