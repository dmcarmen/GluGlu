/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 20:36:41 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/24 21:24:34 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 1;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

void	to_hexa(char aux)
{
	int		r;
	char	hexa[3];
	int		j;

	hexa[0] = '0';
	hexa[1] = '0';
	hexa[2] = 0;
	r = aux % 16;
	j = 0;
	while (aux != 0 && r != 0)
	{
		r = aux % 16;
		if (r >= 10)
			hexa[j++] = r + 'a' - 10;
		else
			hexa[j++] = r + '0';
		aux = aux / 16;
	}
	write(1, "\\", 1);
	ft_putstr(hexa);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		aux;

	i = 0;
	while (str[i])
	{
		if (str[i] < 31 || str[i] > 127)
		{
			aux = str[i];
			to_hexa(aux);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
