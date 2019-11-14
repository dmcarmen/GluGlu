/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 20:09:18 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 19:50:43 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*aux;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(aux = (char*)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	while (i < len1)
	{
		aux[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < len2)
	{
		aux[i + len1] = s2[i];
		i++;
	}
	aux[len1 + len2] = 0;
	return (aux);
}
