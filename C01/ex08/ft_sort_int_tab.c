/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:20:58 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/18 21:22:11 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	i;
	int	swapped;
	int	aux;

	swapped = 1;
	i = 0;
	while (swapped)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] == tab[j + 1])
			{
				aux = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = aux;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}
