/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiez-me <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 19:33:38 by cdiez-me          #+#    #+#             */
/*   Updated: 2019/11/14 20:11:12 by cdiez-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*error_free(char **aux)
{
	int	i;

	i = 0;
	while (aux[i])
		free(aux[i]);
	free(aux);
	return (NULL);
}

static void	ini(char const *s, char c, int *maxlen, int *nwords)
{
	int	i;
	int	len;

	i = 0;
	*nwords = 0;
	*maxlen = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			(*nwords)++;
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			i += len;
			*maxlen = len > *maxlen ? len : *maxlen;
		}
	}
}

static void	fill(const char *s, char c, char **aux)
{
	int	i;
	int	nwords;
	int	len;

	i = 0;
	nwords = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			len = 0;
			while (s[i + len] && s[i + len] != c)
			{
				aux[nwords][len] = s[i + len];
				len++;
			}
			aux[nwords][len] = 0;
			i += len;
			nwords++;
		}
	}
	aux[nwords] = NULL;
}

char		**ft_split(char const *s, char c)
{
	char	**aux;
	int		i;
	int		maxlen;
	int		nwords;

	if (!s)
		return (NULL);
	ini(s, c, &maxlen, &nwords);
	if (!(aux = (char**)malloc(sizeof(char*) * (nwords + 1))))
		return (NULL);
	i = -1;
	while (i++ < nwords)
		if (!(aux[i] = (char*)malloc(sizeof(char) * (maxlen + 1))))
			return (error_free(aux));
	fill(s, c, aux);
	return (aux);
}
