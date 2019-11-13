/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:28:46 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/06 19:51:26 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int n;
	int	i;
	int	flag;

	n = 0;
	i = 0;
	flag = 1;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		flag = -1;
		if (ft_strcmp(str, "-2147483648") == 0)
			return (-2147483648);
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && ft_isdigit(str[i]))
		n = n * 10 + (str[i++] - '0');
	return (n * flag);
}
