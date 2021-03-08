#include <stdio.h>

int	*ft_range(int min, int max);

int	main()
{
	int min = -2;
	int max = 4;

	while (min < max)
	{
		printf("%d", *ft_range(min, max));
		min ++;
	}
}
