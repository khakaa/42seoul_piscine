#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int first = 50;
	int second = 30;

	ft_swap(&first, &second);

	printf("%d %d", first, second);

	return (0);
}
