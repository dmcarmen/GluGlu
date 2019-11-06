/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:16:40 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 20:34:33 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len1;
	int		i;
	int		j;
	int		out;
	char	*aux;

	len1 = ft_strlen(s1);
	ft_strcpy(s1cpy, s1);
	i = 0;
	out = 0;
	while (set[i])
	{
		j = 0;
		while (j < len1)
		{
			if (s1[j] == set[i])
				out++;
			j++;
		}
		i++;
	}
	aux = (char*)malloc(sizeof(char) * (len1 - out + 1));
	if (!aux)
		return (NULL);
	i = 0;
	j = 0;
	while (i < len1 - out)
	{
		if (s1[j] != 0)
		{
			aux[i] = s1[j];
			i++;
		}
		j++;
	}
	aux[len1 - out + 1] = 0;
	return (aux);
}
