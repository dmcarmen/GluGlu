/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 20:51:06 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 08:35:25 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_itoa_rcv(int nbr, char *s)
{
	if (nbr / 10 > 0)
		s = ft_itoa_rcv(nbr / 10, s);
	*s = '0' + nbr % 10;
	return (s + 1);
}

char	*ft_itoa(int nbr)
{
	char	c[12];
	char	*aux;
	int		n;

	aux = ft_itoa_rcv(nbr, c);
	*aux = '\0';
	n = ft_strlen(c);
	aux = malloc(sizeof(char) * (n + 1));
	ft_strcpy(aux, c);
	return (aux);
}
