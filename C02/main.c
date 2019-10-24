#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
void ft_putstr_non_printable(char *str);

int main()
{
	char *dest = (char*)malloc(sizeof(char)*100);
	char src[] = "hooli";
	unsigned int n = 8;

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
	printf("%d\n", ft_str_is_alpha("holiwSSs"));
	printf("%d\n", ft_str_is_alpha("holi SSs"));
	ft_strcpy(dest,src);
	printf("%s\n", ft_strupcase(dest));
	printf("%s\n", ft_strlowcase(dest));
	ft_strcpy(dest, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	printf("%s\n", ft_strcapitalize(dest));
	printf("%d\n", ft_strlcpy(dest, src, n));
	printf("%s\n", dest);
	ft_putstr_non_printable("Coucou\n\ttu vas bien ?");
}
