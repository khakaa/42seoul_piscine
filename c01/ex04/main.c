#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 300;
	int b = 12;

	ft_ultimate_div_mod(&a, &b);

	printf("a와 b를 나눈 값은 : %d \n", a);
	printf("a와 b를 나눈 나머지 값은 : %d", b);

	return(0);
}

