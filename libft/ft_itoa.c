/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:06:43 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 19:09:53 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_rec(int nb, char *c)
{
	if (nb / 10 > 0)
		c = ft_itoa_rec(nb / 10, c);
	*c = '0' + nb % 10;
	*(c + 1) = 0;
	return (c + 1);
}

char	*ft_itoa(int nb)
{
	char	c[13];
	char	*aux;

	if (nb == -2147483648)
	{
		aux = malloc(sizeof(char) * 13);
		if (!aux)
			return NULL;
		ft_strcpy(aux, "-2147483648");
		return (aux);
	}
	if (nb < 0)
	{
		c[0] = '-';
		nb = -nb;	
		aux = ft_itoa_rec(nb, c + 1); // comprobar
	}
	else
		aux = ft_itoa_rec(nb, c);
	aux[0] = 0;
	aux = malloc(sizeof(char) * (ft_strlen(c) + 1));
	if (!aux)
		return NULL;
	ft_strcpy(aux, c);
	return (aux);
}
