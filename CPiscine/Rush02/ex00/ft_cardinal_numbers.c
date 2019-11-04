/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cardinal_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 17:36:49 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 10:17:56 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_cardinal	*ft_generate_words(t_cardinal *list, t_list *dict, int nbr)
{
	char *aux;
	char *word;

	if (nbr == 0)
		return (list);
	else if (nbr >= 1 && nbr <= 20)
		aux = ft_itoa(nbr);
	else if (nbr < 100)
		aux = ft_itoa(nbr - nbr % 10);
	else
		aux = ft_itoa((nbr - nbr % 100) / 100);
	word = list_get_nbwr(dict, aux);
	list = ft_add_cardinal_node(list, word);
	free(aux);
	if (nbr > 20 && nbr < 100)
		ft_generate_words(list, dict, nbr % 10);
	else if (nbr >= 100)
	{
		word = list_get_nbwr(dict, "100");
		list = ft_add_cardinal_node(list, word);
		ft_generate_words(list, dict, nbr % 100);
	}
	return (list);
}

t_cardinal	*ft_process_group(t_cardinal *list, t_list *dict, char *s, int len)
{
	char		str[4];
	char		*zeros;
	char		*aux;
	int			nbr;

	ft_strlcpy(str, s, len % 3 == 0 ? 4 : len % 3 + 1);
	nbr = ft_atoi(str);
	list = ft_generate_words(list, dict, nbr);
	if ((len - 1) / 3 > 0 && nbr > 0)
	{
		zeros = ft_str_one_with_n_zeros((len - 1) / 3 * 3);
		aux = list_get_nbwr(dict, zeros);
		list = ft_add_cardinal_node(list, aux);
		free(zeros);
	}
	return (list);
}

t_cardinal	*ft_cardinal_numbers(t_list *dict, char *str)
{
	int			len;
	char		*word;
	t_cardinal	*list;

	list = NULL;
	len = ft_strlen(str);
	if (ft_atoi(str) == 0)
	{
		word = list_get_nbwr(dict, "0");
		list = ft_add_cardinal_node(list, word);
	}
	else
		while (len > 0)
		{
			list = ft_process_group(list, dict, str, len);
			str += len % 3 == 0 ? 3 : len % 3;
			len -= len % 3 == 0 ? 3 : len % 3;
		}
	return (list);
}
