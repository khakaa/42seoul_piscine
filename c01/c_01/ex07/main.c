#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int	tab[7] = {1,2,3,4,5,6,7};
	int i = 0;

	ft_rev_int_tab(tab, 7);
	while (i < 7)
	{
		printf("%d", tab[i]);
		i++;
	}
}
