#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main()
{
	int min = 2;
	int max = 10;
	int *range;

	//int **range = &range;

		printf("%d", ft_ultimate_range(&range, min, max));
}
