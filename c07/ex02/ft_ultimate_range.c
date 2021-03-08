#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	result;

	result = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(sizeof(int) * result);
	if(!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (result);
}
