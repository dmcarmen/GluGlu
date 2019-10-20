/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_cardinal_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:47:27 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 08:38:46 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_cardinal		*ft_add_cardinal_node(t_cardinal *list, char *value)
{
	t_cardinal	*aux;
	t_cardinal	*tmp;

	tmp = list;
	aux = malloc(sizeof(t_cardinal));
	if (aux == NULL)
		return (NULL);
	aux->name = value;
	aux->next = NULL;
	if (list == NULL)
		tmp = aux;
	else
	{
		while (list->next != NULL)
			list = list->next;
		list->next = aux;
	}
	return (tmp);
}
