/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:29:07 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 16:34:54 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int n)
{
	char			*aux;
	unsigned int	len;

	aux = dst;
	len = ft_strlen(src);
	while (*src != '\0' && (n > 0 ? n-- : 0) > 1)
		*aux++ = *src++;
	*aux = '\0';
	return (len);
}
