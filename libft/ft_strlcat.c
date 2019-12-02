/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:27:04 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 20:10:22 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dest);
	if (size < len)
		return (size + ft_strlen(src));
	return (len + ft_strlcpy(dest + len, src, size - len));
}
