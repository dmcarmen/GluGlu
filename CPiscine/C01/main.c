void ft_ft(int *nbr);
void ft_ultimate_ft(int *********nbr);
void ft_swap(int *a, int *b);
void ft_div_mod(int a, int b, int *div, int *mod);
void ft_ultimate_div_mod(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
void ft_rev_int_tab(int *tab, int size);
void ft_sort_int_tab(int *tab, int size);

#include <stdio.h>

int main()
{
	int a = 2, b = 5;
	int div = 0, mod = 0;
//	char str[300] = "uwu de los  grandes uwu";
	int tab[5] = {2, 4, 3, 1, 6};
	int size = 10;
//	int ********p;

	ft_ft(&a);
	printf("%d == 42 \n", a);
//	ft_ultimate_ft(&p);
//	printf("%d == 42\n", a);
	a = 11;
	ft_div_mod(a,b,&div,&mod);
	printf("%d %d == 2 1\n", div, mod);
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d == 2 1\n", a, b);
//	ft_putstr(str);
//	printf("%d == 24?", ft_strlen(str));
	ft_rev_int_tab(tab, size);
	for (int i = 0; i<size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
}
