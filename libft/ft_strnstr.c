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
	size_t	i;
	int			len_little;

	if (!(*little))
		return ((char*)big);
	len_little = ft_strlen(little);
	i = 0;
	while (big[i] && i + len_little <= len)
	{
		if (ft_memcmp(big + i, little, len_little) == 0)
			return (char *)big + i;
		i++;
	}
	return (NULL);
}
