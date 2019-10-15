#include <unistd.h>

void    ft_putchar(char i)
{
        write(1, &i, 1);
}

void    ft_putnbr(int nb)
{
	char	aux;
	int	n;

	if (nb == -2147483648)
   	 {
       		 ft_putchar('-');
       		 ft_putchar('2');
       		 ft_putnbr(147483648);
   	 }
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int main()
{
        ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(-2);
	ft_putnbr(2147483647);
        return 0;
}
