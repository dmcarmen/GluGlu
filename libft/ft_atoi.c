/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:28:46 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 21:34:36 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	n;
	long	prev_n;
	int		flag;

	i = 0;
	n = 0;
	flag = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
		flag = (str[i++] == '-' ? -1 : 1);
	while (ft_isdigit(str[i]))
	{
		prev_n = n * 10 + (str[i++] - '0');
		if (prev_n < n)
			return (flag < 0 ? 0 : -1);
		n = prev_n;
	}
	return (flag * n);
}
