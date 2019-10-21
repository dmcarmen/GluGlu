/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 19:30:44 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/19 22:19:19 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int len;
	int	aux;
	int	i;

	len = ft_strlen(s1);
	if (len != ft_strlen(s2))
		return (-1);
	i = 0;
	while (i < len)
	{
		aux = s1[i] - s2[i];
		if (aux != 0)
			return (aux);
		i++;
	}
	return (0);
}
