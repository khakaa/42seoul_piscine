#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[] = "asd";
	char s2[] = "a";

	printf("%d", ft_strncmp(s1, s2, 2));
}
