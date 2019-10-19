/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_one_with_n_zeros.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:04:49 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 17:29:31 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_str_one_with_n_zeros(int zeros)
{
	char	*str;
	char	*aux;

	str = (char *)malloc(sizeof(char) * (zeros + 2));
	aux = str;
	*aux++ = '1';
	while (zeros-- > 0)
		*aux++ = '0';
	*aux = '\0';
	return (str);
}
