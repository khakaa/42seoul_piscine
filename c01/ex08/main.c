#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	
	int tab[] = {54, 23, 12, 9, 34, 182, 34, 75};
	int i;

	ft_sort_int_tab(tab, sizeof(tab)/sizeof(int));

	i = 0;
	while(i < 8)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
