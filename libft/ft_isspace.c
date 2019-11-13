#include "libft.h"

int	ft_isspace(int c)
{
	return (ft_isblank(c) || c == '\n' || c == '\v' || c == '\f' || c == '\r');
}
