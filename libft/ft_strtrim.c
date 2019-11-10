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
	int	j;
	int	k;
	int	flag;
	char	*aux;

	aux = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	i = 0;
	k = 0;
	while (s1[i])
	{
		j = 0;
		flag = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				flag = 1;
			j++;
		}
		if (!flag)
		{
			aux[k] = s1[i];
			k++;
		}
		i++;
	}	
	aux[k] = 0;
	return (aux);
}
