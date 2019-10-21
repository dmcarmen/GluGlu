/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:44:50 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/21 12:54:13 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while ((str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] < 'z') && str[i]) //o numeros
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += ('a' - 'A');
		i++;
		while (!(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] < 'z') && str[i]) //same numeros
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
			i++;
		}
	}
	return (str);
}
