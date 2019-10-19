/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cardinal_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:36:49 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 22:21:13 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_cardinal_numbers(t_list *dict, char *str)
{
	int		len;
	int		digits;

	len = ft_strlen(str);
	if (len == 1 && *str == '0')
	{
		printf("%s\n", list_get_nbwr(dict, "0"));
	}
	else
		while (len > 0)
		{
			digits = (len % 3 == 0 ? 3 : len % 3);
			ft_process_group(dict, str, digits, ((len - 1) / 3) * 3 );
			len -= digits;
			str += digits;
		}
}

t_cardinal	*ft_process_group(t_list *dict, char *s, int digits, int thousand)
{
	char		str[4];
	char		*zeros;
	int			nbr;
	t_cardinal	*node;

	node = NULL;
	ft_strlcpy(str, s, digits + 1);
	nbr = ft_atoi(str);
	ft_print_value(dict, nbr);
	if (thousand > 0 && nbr > 0)
	{
		zeros = ft_str_one_with_n_zeros(thousand);
		printf("%s\n", list_get_nbwr(dict, zeros));
		free(zeros);
	}
	return node;
}

void	ft_print_value(t_list *dict, int nbr)
{
	char *aux;

	if (nbr == 0)
		return ;
	else if (nbr >= 1 && nbr <= 20)
	{
		aux = ft_itoa(nbr);
		printf("%s\n", list_get_nbwr(dict, aux));
	}
	else if (nbr < 100)
	{
		aux = ft_itoa(nbr - nbr % 10);
		printf("%s\n", list_get_nbwr(dict, aux));
		ft_print_value(dict, nbr % 10);
	}
	else
	{
		aux = ft_itoa((nbr - nbr % 100) / 100);
		printf("%s\n", list_get_nbwr(dict, aux));
		printf("%s\n", list_get_nbwr(dict, "100"));
		ft_print_value(dict, nbr % 100);
	}
	free(aux);
}
