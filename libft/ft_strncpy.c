/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:41:23 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/12/12 20:44:30 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	len;

	len = ft_min(n, ft_strlen(src));
	ft_memcpy(dst, src, len);
	while (len < n)
		ft_bzero(dst + len, n - len);
	return (dst);
}
