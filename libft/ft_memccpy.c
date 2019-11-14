/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:30:37 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 20:07:30 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char*)dest;
	psrc = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		pdest[i] = (unsigned char)psrc[i];
		if (psrc[i] == (unsigned char)c)
			return ((void*)(dest + i + 1));
		i++;
	}
	return (NULL);
}
