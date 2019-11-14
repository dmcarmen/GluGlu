#include "libft.h"

char **ft_strsplit(char const *s, char c)
{
	char	**aux;
	int	i;
	int	maxlen;
	int	len;
	int	nwords;

	i = 0;
	nwords = 0;
	maxlen = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] !=c)
		{
			nwords++;
			len = 0;
			while (s[i + len] && s[i + len] != c)
				len++;
			i += len;
			maxlen = len > maxlen ? len : maxlen;
		}
	}
	if(!(aux = (char**)malloc(sizeof(char*) * (nwords + 1))))
		return (NULL);
	i = -1;
	while (i++ < nwords)
		if (!(aux[i] = (char*)malloc(sizeof(char) * (maxlen + 1))))
		{
			while (i-- > 0)
				free(aux[i]);
			free(aux);
			return (NULL);
		}
	i = 0;
	nwords = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] !=c)
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
	return (aux);
}
