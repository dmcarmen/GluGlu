/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:27:04 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 19:55:06 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = ft_strlen(dest);
	i = 0;
	while (i < size - len - 1 && src[i])
	{
		dest[i + len] = src[i];
		i++;
	}
	while (dest[i + len])
	{
		dest[i + len] = 0;
		i++;
	}
	if (size > 0)
		dest[size - 1] = 0;
	return (len + ft_strlen(src));
}
