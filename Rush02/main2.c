/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 14:31:40 by edramire          #+#    #+#             */
/*   Updated: 2019/10/19 22:21:38 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list *create_list()
{
	t_list *l;
		
	l = list_ini();
	list_insert_last(l, "0", "zero");
	list_insert_last(l, "1", "one");
	list_insert_last(l, "2", "two");
	list_insert_last(l, "3", "three");
	list_insert_last(l, "4", "four");
	list_insert_last(l, "5", "five");
	list_insert_last(l, "6", "six");
	list_insert_last(l, "7", "seven");
	list_insert_last(l, "8", "eight");
	list_insert_last(l, "9", "nine");
	list_insert_last(l, "10", "ten");
	list_insert_last(l, "11", "eleven");
	list_insert_last(l, "12", "twelve");
	list_insert_last(l, "13", "thirteen");
	list_insert_last(l, "14", "fourteen");
	list_insert_last(l, "15", "fifteen");
	list_insert_last(l, "16", "sixteen");
	list_insert_last(l, "17", "seventeen");
	list_insert_last(l, "18", "eighteen");
	list_insert_last(l, "19", "nineteen");
	list_insert_last(l, "20", "twenty");
	list_insert_last(l, "30", "thirty");
	list_insert_last(l, "40", "forty");
	list_insert_last(l, "50", "fifty");
	list_insert_last(l, "60", "sixty");
	list_insert_last(l, "70", "seventy");
	list_insert_last(l, "80", "eighty");
	list_insert_last(l, "90", "ninety");
	list_insert_last(l, "100", "hundred");
	list_insert_last(l, "1000", "thousand");
	list_insert_last(l, "1000000", "million");
	return (l);
}

int		main(void)
{

	t_list *list;

	list = create_list();
	ft_cardinal_numbers(list, "0");
	printf("\n");
	ft_cardinal_numbers(list, "3");
	printf("\n");
	ft_cardinal_numbers(list, "14439742");

	return (0);
}
