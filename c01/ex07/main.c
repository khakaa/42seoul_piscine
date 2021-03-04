#include <stdio.h>


void	ft_rev_int_tab(int *tab, int size);

int	main()
{
	int i = 0;
	int	tab[] = {1,2,3,4,5,6,7};

	ft_rev_int_tab(tab, sizeof(tab)/sizeof(int));
	while (i < 7)
	{
		printf("%d", tab[i]);
		i++;
	}
}
