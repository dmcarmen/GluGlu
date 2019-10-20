/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_cardinal_node.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:47:27 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 21:18:17 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_cardinal		*ft_create_cardinal_node(char *value)
{
	t_cardinal	*aux;
	int			len;

	len = ft_strlen(value);
	aux = malloc(sizeof(t_cardinal));
	if (aux == NULL)
		return (NULL);
	aux->name = malloc(sizeof(char) * (len + 1));
	ft_strcpy(aux->name, value);
	return (aux);
}
