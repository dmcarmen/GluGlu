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

static int	neg_and_clean(const char *str, int *i)
{
	int	flag;

	flag = 1;
	while (ft_isspace(str[*i]))
		(*i)++;
	if (str[*i] == '-')
	{
		if (ft_strcmp(str, "-2147483648") == 0)
			return (-2147483648);
		flag = -1;
		(*i)++;
	}
	else if (str[*i] == '+')
		(*i)++;
	return (flag);
}

int			ft_atoi(const char *str)
{
	unsigned int	n;
	int				i;
	int				flag;

	n = 0;
	i = 0;
	flag = neg_and_clean(str, &i);
	if (flag == -2147483648)
		return (flag);
	while (ft_isdigit(str[i]))
	{
		if (flag == 1 && n > (unsigned int)2147483648)
			return (-1);
		else if (flag == -1 && n > (unsigned int)-2147483648)
			return (0);
		n = n * 10 + (str[i++] - '0');
	}
	return (n * flag);
}
