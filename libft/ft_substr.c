/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:03:07 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 21:53:47 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*aux;
	unsigned int	i;

	if (!s)
		return (NULL);
	aux = (char*)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	i = 0;
	if (start <= (unsigned int)ft_strlen(s))
		while (i < len && s[start + i])
		{
			aux[i] = s[start + i];
			i++;
		}
	aux[i] = 0;
	return (aux);
}
