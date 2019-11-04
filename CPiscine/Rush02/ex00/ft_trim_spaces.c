/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:03:32 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:59:55 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_trim_spaces(char *line)
{
	char	*aux;
	char	*tmp;

	tmp = line;
	while (*tmp >= '0' && *tmp <= '9')
		tmp++;
	aux = tmp;
	while (*tmp == ' ')
		tmp++;
	*aux++ = *tmp++;
	while (*tmp == ' ')
		tmp++;
	while (*tmp != '\n')
	{
		*aux++ = *tmp;
		if (*tmp == ' ')
			while (*tmp == ' ')
				tmp++;
		else
			tmp++;
	}
	if (*(aux - 1) == ' ')
		*(aux - 1) = '\0';
	else
		*aux = '\0';
}
