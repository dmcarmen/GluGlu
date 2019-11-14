/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:24:55 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 20:56:35 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;

	if (!dest || !src)
		return (0);
	len = ft_strlen(src);
	if (len < size)
		ft_strncpy(dest, src, len + 1);
	else if (size != 0)
	{
		ft_strncpy(dest, src, size - 1);
		dest[size - 1] = 0;
	}
	return (len);
}
