#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main()
{
	char s1[] = "asdg";
	char s2[] = "asdf";

	printf("%d", ft_strncmp(s1, s2, 4));
}
