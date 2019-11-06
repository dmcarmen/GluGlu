#include "libft/libft.h"

int main()
{
	char *s1 = malloc(sizeof(char)*100);
	char s2[100] = "holi";
	strlcpy(s1, s2, 3);
	printf("%s %s\n", s1, s2);
	ft_strlcpy(s1, s2, 3);
	printf("%s %s\n", s1, s2);
	strlcat(s1, s2, 1);
	printf("%s\n", s1);
	strlcpy(s1, s2, 3);
	ft_strlcat(s1, s2, 1);
	printf("%s\n", s1);
}
