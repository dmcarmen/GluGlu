/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_key_value.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edramire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:58:00 by edramire          #+#    #+#             */
/*   Updated: 2019/10/20 21:07:20 by edramire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_create_key_value(t_list *dict, char *line)
{
	int		len;
	char	*key;
	char	*value;

	ft_trim_spaces(line);
	len = 0;
	while (*(line + len) != ':')
		len++;
	*(line + len) = '\0';
	key = ft_get_buffer(len + 1, NULL);
	ft_strlcpy(key, line, len + 1);
	line += len + 1;
	len = ft_strlen(line);
	value = ft_get_buffer(len + 1, NULL);
	ft_strlcpy(value, line, len + 1);
	list_insert_last(dict, key, value);
}
