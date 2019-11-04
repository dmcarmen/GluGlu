/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 18:40:50 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/12 20:48:51 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#define SIZE 4

int	str_len(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	print_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	check_char(int i, int j, char *tb, char *str)
{
	if (str[i] > '0' && str[i] < '5')
	{
		if (i < 30)
		{
			if (str[i + 1] == ' ')
				tb[j] = str[i];
			else
				return (print_error());
		}
		else
			tb[j] = str[i];
	}
	else
		return (print_error());
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	tb[SIZE * SIZE];

	if (argc != 2 || str_len(argv[1]) != 31)
		return (print_error());
	j = 0;
	i = 0;
	while (i < 32)
	{
		if (check_char(i, j, tb, argv[1]))
			return (0);
		i = i + 2;
		j++;
	}
}
