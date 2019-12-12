/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:36:35 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 19:37:00 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*aux;
	size_t	size;

	size = ft_strlen(s) + 1;
	aux = malloc(sizeof(char) * size);
	if (!aux)
		return (NULL);
	return (ft_memcpy(aux, s, size));
}
