/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:42:19 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 19:44:57 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = NULL;
	while (*s)
	{
		if (*s == c)
			aux = (char *)s;
		s++;
	}
	if (aux)
		return (aux);
	if (c == 0)
		return ((char*)s);
	return (NULL);
}
