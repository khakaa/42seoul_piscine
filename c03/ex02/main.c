#include <stdio.h>

int	ft_strlen(char *src);

char	*ft_strcat(char *dest, char *src);

int     main(void)
{
	char dest[30] = "abcde";
	char src[] = "fghijk";

	printf("%s", ft_strcat(dest, src));
}
