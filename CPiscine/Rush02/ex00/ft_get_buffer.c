/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_buffer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 19:08:01 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:05:14 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_buffer(int size, char *buffer)
{
	char	*aux;

	aux = malloc(sizeof(char) * size);
	if (buffer != NULL)
	{
		ft_strcpy(aux, buffer);
		free(buffer);
	}
	return (aux);
}
