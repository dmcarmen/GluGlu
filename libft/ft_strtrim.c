/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:16:40 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 20:35:05 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	len;
	char	*aux;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr((char*)set, s1[i]))
		i++;
	len = ft_strlen(&s1[i]);
	if (len != 0)
	{
		while (s1[i + len - 1] &&
				ft_strchr((char*)set, s1[i + len - 1]))
			len--;
	}
	aux = (char*)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	ft_strncpy(aux, &s1[i], len);
	aux[len] = 0;
	return (aux);
}
