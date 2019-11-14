/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:40:20 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 19:47:42 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	unsigned int	i;
	char			*aux;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	aux = (char*)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	i = 0;
	while (i < len)
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = 0;
	return (aux);
}
