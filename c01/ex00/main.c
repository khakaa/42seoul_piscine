#include <stdio.h>

void	ft_ft(int *nbr);

int main()
{
	int a;
	int *nbr; 
	nbr = &a;

	ft_ft(&a);

	printf("%d", a);

	return (0);
}
