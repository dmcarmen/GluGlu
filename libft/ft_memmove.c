/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:31:34 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 21:21:54 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	if (dest == src)
		return (dest);
	pdest = (char*)dest;
	psrc = (char*)src;
	i = -1;
	if (psrc < pdest)
	{
		while (++i < n)
			pdest[n - i - 1] = psrc[n - i - 1];
	}
	else
	{
		while (++i < n)
			pdest[i] = psrc[i];
	}
	return (dest);
}
