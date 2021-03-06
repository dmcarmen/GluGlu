/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:13:24 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/12/12 20:18:20 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

int				ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;

	len = ft_min(ft_strlen(s1) + 1, ft_strlen(s2) + 1);
	return (ft_memcmp(s1, s2, len));
}
