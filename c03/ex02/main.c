#include <stdio.h>

int	ft_strlen(char *src);

char	*ft_strcat(char *dest, char *src);

int     main(void)
{
	char dest[6] = "hello";
	char src[] = "42";

	printf("%s", ft_strcat(dest, src));
}
