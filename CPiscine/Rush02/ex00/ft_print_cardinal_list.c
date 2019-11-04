/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_cardinal_list.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 01:28:34 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 08:33:37 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_cardinal_list(t_cardinal *list)
{
	t_cardinal *aux;

	aux = list;
	while (aux != NULL)
	{
		if (aux->name == NULL)
		{
			ft_putstr("Dict Error\n");
			return ;
		}
		aux = aux->next;
	}
	while (list != NULL)
	{
		ft_putstr(list->name);
		list = list->next;
		if (list == NULL)
			ft_putchar('\n');
		else
			ft_putchar(' ');
	}
}
