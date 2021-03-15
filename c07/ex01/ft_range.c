#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	if (!(result = (int *)malloc(sizeof(int) * (long long)(max - min))))
		return (NULL);
	i = 0;
	while (min < max)
		result[i++] = min++;
	return (result);
}
