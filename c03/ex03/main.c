#include <stdio.h>

int	ft_strlen(char *dest);

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[30] = "hello42";
	char src[] = "today";
	
	printf("%s", ft_strncat(dest, src, 6));
	
	return 0;
}	
