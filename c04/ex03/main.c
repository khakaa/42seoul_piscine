#include <stdio.h>

int	ft_atoi(char *str);

int	main()
{
	char str[] = " \n\t\v\f\r   ---+121 -a33";
	printf("%d", ft_atoi(str));
}
