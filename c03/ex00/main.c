#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2);

int     main(void)
{
	char str1[] = "abcde";
	char str2[] = "abcdeea";

	printf("%d", ft_strcmp(str1, str2));
}
