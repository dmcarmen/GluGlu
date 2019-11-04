/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 12:44:50 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/10/24 20:23:04 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char c)
{
	if (c < '0' || c > '9')
		if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
			return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (!ft_is_alphanum(str[i]) && str[i])
			i++;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		if (str[i])
			i++;
		while (ft_is_alphanum(str[i]) && str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += ('a' - 'A');
			i++;
		}
	}
	return (str);
}
