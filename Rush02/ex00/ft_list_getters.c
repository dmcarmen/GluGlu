/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_getters.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 21:22:05 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/20 21:26:30 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		*list_get_nbwr(const t_list *l, char *nb)
{
	t_node_list	*qn;

	if (list_is_empty(l))
		return (NULL);
	qn = l->node;
	while (qn)
	{
		if (ft_strcmp(qn->nb, nb) == 0)
		{
			return (qn->nbwr);
		}
		qn = qn->next;
	}
	return (NULL);
}

t_node_list	*list_get_node(const t_list *l, char *nb)
{
	t_node_list	*qn;

	if (list_is_empty(l))
		return (NULL);
	qn = l->node;
	while (qn)
	{
		if (ft_strcmp(qn->nb, nb) == 0)
		{
			return (qn);
		}
		qn = qn->next;
	}
	return (NULL);
	return (NULL);
	qn = l->node;
	while (qn)
	{
		if (ft_strcmp(qn->nb, nb) == 0)
		{
			return (qn);
		}
		qn = qn->next;
	}
	return (NULL);
}
