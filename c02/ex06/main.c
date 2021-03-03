#include <stdio.h>

int	is_printable(char c);

int 	ft_str_is_printable(char *str);

int	main(void)
{
	char str[] = "\t\n";

	printf("%d", ft_str_is_printable(str));
	return 0;
}
