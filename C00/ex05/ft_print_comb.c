#include <unistd.h>

void	ft_put_nbr1(int i)
{
	char	aux;
	
	aux = '0' + i;
	write(1, &aux, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				ft_put_nbr1(i);
				ft_put_nbr1(j);
				ft_put_nbr1(k);
				if (!(i == 7 && j == 8 && k == 9))
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
	return 0;
}
