#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int *temp;

	if (min >= max)
	{
		ret = NULL;
		return (ret);
	}
	if(!(ret = (int*)malloc(sizeof(int) * (long long)(max - min))))
		return (NULL);
	temp = ret;
	while (min < max)
	{
		*temp = min;
		temp++;
		min++;
	}
	return (ret);
}
