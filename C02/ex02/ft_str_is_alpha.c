
int	ft_str_is_alpha(char *str)
{
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
