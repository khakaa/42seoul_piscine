#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "hello42";
	char dest[30];

	printf("%u", ft_strlcpy(dest, src, 5));
}
