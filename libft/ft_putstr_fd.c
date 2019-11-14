/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 18:40:53 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 20:11:59 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;
	int	len;

	if (!str || fd < 0)
		return ;
	i = 0;
	while (str[i])
		i++;
	len = i;
	i = 0;
	while (i < len)
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
