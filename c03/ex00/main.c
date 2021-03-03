#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int     main(void)
{
	char str1[] = "abcdeee";
	char str2[] = "abcdeezf";

	printf("%d", ft_strcmp(str1, str2));
}
