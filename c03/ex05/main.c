#include <stdio.h>

int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[30] = "abc";
	char src[] = "defg";

	printf("%u", ft_strlcat(dest, src, 0));
	printf("%s", dest);
}
