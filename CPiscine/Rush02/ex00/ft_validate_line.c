/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 14:53:04 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:29:46 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_validate_mode_one(char c)
{
	if (ft_is_numeric(c) == 1)
		return (1);
	if (c == ' ')
		return (2);
	if (c == ':')
		return (3);
	return (5);
}

int		ft_validate_mode_two(char c)
{
	if (c == ' ')
		return (2);
	if (c == ':')
		return (3);
	return (5);
}

int		ft_validate_mode_three(char c)
{
	if (c == ' ')
		return (3);
	if (ft_is_printable(c) == 1)
		return (4);
	return (5);
}

int		ft_validate_mode_four(char c)
{
	if (ft_is_printable(c) == 1)
		return (4);
	if (c == '\n')
		return (6);
	return (5);
}

int		ft_validate_line(char *line)
{
	int mode;

	mode = 0;
	if (ft_strlen(line) == 1 && *line == '\n')
		return (2);
	while (*line != '\0' && mode < 5)
	{
		if (mode == 0)
		{
			if (ft_is_numeric(*line) == 1)
				mode++;
			else
				return (0);
		}
		else if (mode == 1)
			mode = ft_validate_mode_one(*line);
		else if (mode == 2)
			mode = ft_validate_mode_two(*line);
		else if (mode == 3)
			mode = ft_validate_mode_three(*line);
		else if (mode == 4)
			mode = ft_validate_mode_four(*line);
		line++;
	}
	return (mode == 6 ? 1 : 0);
}
