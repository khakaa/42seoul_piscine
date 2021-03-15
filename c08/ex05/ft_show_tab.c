#include "ft_stock_str.h"
#include <unistd.h>

int		print_size(int size)
{
	char	c;

	if (size)
	{
		c = '0' + size % 10;
		print_size(size / 10);
		write(1, &c, 1);
	}
	else
		return (0);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].size)
	{
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		if (par[i].size)
			print_size(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
