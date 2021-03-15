#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void				*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (0);
	i = 0;
	while (av[i] && i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = malloc(sizeof(char) * result[i].size + 1);
		ft_strcpy(result[i].copy, av[i]);
		i++;
	}
	result[i].str = 0;
	return (result);
}
