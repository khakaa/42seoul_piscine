#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	while(dest[i])
		i++;
	return (i);
}

int	main(void)
{
	char src[] = "hello42";
	char dest[100];

	printf("%d", ft_strlcpy(dest, src, 8));
}
