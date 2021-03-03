#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char str[] = " \n\t\v\f\r   ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}
