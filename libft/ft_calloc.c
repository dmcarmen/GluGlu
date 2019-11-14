/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:27:24 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 19:43:43 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*aux;

	aux = (void*)malloc(nmeb * size);
	if (!aux)
		return (NULL);
	ft_bzero(aux, nmeb * size);
	return (aux);
}
