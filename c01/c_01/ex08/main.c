#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main()
{
	int tab[5] = {5, 46, 38, 22, 39};
	int i;

	ft_sort_int_tab(tab, 5);

	i = 0;
	while(i <= 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
