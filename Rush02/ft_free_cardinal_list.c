/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_cardinal_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:43:14 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 21:18:26 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_free_cardinal_list(t_cardinal *list)
{
	t_cardinal	*aux;

	while (list != NULL)
	{
		aux = list;
		list = list->next;
		free(aux->name);
		free(aux);
	}
}
