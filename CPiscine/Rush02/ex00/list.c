/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:48:56 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/20 21:29:54 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list		*list_ini(void)
{
	t_list	*l;

	l = (t_list *)malloc(sizeof(t_list));
	if (!l)
		return (NULL);
	l->node = NULL;
	return (l);
}

void		list_free(t_list *l)
{
	t_node_list *aux;
	t_node_list *node;

	if (l)
	{
		node = l->node;
		while (node != NULL)
		{
			aux = node;
			node = node->next;
			free(aux->nb);
			free(aux->nbwr);
			free(aux);
		}
	}
	free(l);
}

t_node_list	*list_node_ini(char *nb, char *nbwr)
{
	t_node_list	*pn;

	pn = (t_node_list*)malloc(sizeof(t_node_list));
	pn->next = NULL;
	pn->nb = nb;
	pn->nbwr = nbwr;
	return (pn);
}

int			list_insert_last(t_list *l, char *nb, char *nbwr)
{
	t_node_list	*pn;
	t_node_list	*qn;

	if (list_get_nbwr(l, nb) != NULL)
	{
		pn = list_get_node(l, nb);
		free(pn->nb);
		free(pn->nbwr);
		pn->nb = nb;
		pn->nbwr = nbwr;
		return (1);
	}
	pn = list_node_ini(nb, nbwr);
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

int			list_is_empty(const t_list *l)
{
	if (!l || !l->node)
		return (1);
	return (0);
}
