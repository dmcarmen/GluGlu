/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:34:26 by jlozano-          #+#    #+#             */
/*   Updated: 2019/10/20 19:08:24 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_error(int error)
{
	if (error == 1)
		ft_putstr("Error\n");
	else if (error == 2)
		ft_putstr("Dict Error\n");
}

int		error_control(int n, char *number, t_list *dict, char *file_name_dict)
{
	int	error;

	error = 0;
	if (n < 2 || n > 3)
		error = 1;
	if (error == 0 && ft_validate_number(number) == 0)
		error = 1;
	if (error == 0 && ft_load_dictionary(dict, "numbers.dict") > 0)
		error = 2;
	if (error == 0 && file_name_dict != NULL)
	{
		if (ft_load_dictionary(dict, file_name_dict) > 0)
			error = 2;
	}
	return (error);
}

int		main(int n, char **arg)
{
	char		*file_name_dict;
	char		*number;
	int			error;
	t_list		*dict;
	t_cardinal	*cardinal;

	number = n == 2 ? *(arg + 1) : *(arg + 2);
	file_name_dict = n == 3 ? *(arg + 1) : NULL;
	number += *number == '+' ? 1 : 0;
	dict = list_ini();
	error = error_control(n, number, dict, file_name_dict);
	if (error > 0)
		ft_print_error(error);
	else
	{
		cardinal = ft_cardinal_numbers(dict, number);
		ft_print_cardinal_list(cardinal);
		ft_free_cardinal_list(cardinal);
	}
	list_free(dict);
	return (0);
}
