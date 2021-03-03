#include <stdio.h>

int	is_lowercase(char c);

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char str[] = "asAfcdc";

	printf("%d", ft_str_is_lowercase(str));
	return(0);
}
