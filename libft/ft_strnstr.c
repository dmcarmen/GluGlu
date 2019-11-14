/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:41:51 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 21:47:53 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;

	if (!*little)
		return ((char*)big);
	i = 0;
	if (ft_strcmp((char*)big, (char*)little) == 0)
		return ((char*)big);
	while (big[i] && (i < len - ft_strlen(little)) && (unsigned int)len != 0)
	{
		if (ft_strncmp((char*)little, (char*)&big[i], ft_strlen(little)) == 0)
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
