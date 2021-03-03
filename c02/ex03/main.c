#include <stdio.h>

int	is_numeric(char c);

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[] = "!!1212!!!ad";

	printf("%d", ft_str_is_numeric(str));
}
