#include <stdio.h>
int	*ft_range(int min, int max);

int	main()
{
	int min = -2;
	int max = 4;
	int *result;
	int idx;

	result = ft_range(min, max);
	idx = 0;
	while (idx < max - min)
	{
		printf("%d ", result[idx]);
		idx++;
	}
}
