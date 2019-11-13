#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	
	if (len == 0)
		return (NULL);
	if (!*little)
		return ((char*)big);
	i = 0;
	while (big[i] && i < len - ft_strlen(little))
	{
		if (ft_strncmp((char*)little, (char*)&big[i], ft_strlen(little)) == 0)
			return ((char*)&big[i]);
		i++;
	}
	return (NULL);
}
