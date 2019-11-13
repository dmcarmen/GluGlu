/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:24:55 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 19:50:06 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

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
