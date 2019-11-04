/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 18:38:18 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/16 18:42:31 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_nbr1(int i)
{
	char	aux;

	if (i < 10)
	{
		write(1, "0", 1);
		aux = '0' + i;
		write(1, &aux, 1);
	}
	else
	{
		aux = i / 10 + '0';
		write(1, &aux, 1);
		aux = i % 10 + '0';
		write(1, &aux, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_put_nbr1(i);
			write(1, " ", 1);
			ft_put_nbr1(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
