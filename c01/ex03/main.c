#include <stdio.h>

void	ft_div_mod(int a, int b, int * div, int *mod);

int	main(void)
{
	int *div, *mod, x, y;
	
	div = &x;
	mod = &y;

	ft_div_mod(5, 10, div, mod);

	printf("%d %d", x, y);

	return(0);
}
