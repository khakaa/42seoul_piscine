#include <stdlib.h>

int		ft_strlen(char *str);
int		check_base(char *base);
int		get_index(char c, char *base);
int		ft_atoi_base_from(char *nbr, char *base);

int		get_number_size(int nbr, char *base)
{
	int	size;
	int	base_length;

	base_length = ft_strlen(base);
	size = 0;
	if (nbr < 0)
	{
		size++;
		nbr *= -1;
	}
	while (nbr >= base_length)
	{
		++size;
		nbr /= base_length;
	}
	return (size + 1);
}

char	*ft_putnbr_base_to(int number, char *base)
{
	long long		temp;
	int		size;
	char	*result;

	size = get_number_size(number, base);
	result = malloc(sizeof(char) * size);
	if (!result)
		return (0);
	temp = number;
	if (check_base(base))
	{
		if (temp < 0)
			temp *= -1;
		if (number < 0)
			result[0] = '-';
		while (temp)
		{
			result[--size] = base[temp % ft_strlen(base)];
			temp = temp / ft_strlen(base);
		}
		result[size] = 0;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!check_base(base_from) && !check_base(base_to))
		return (0);
	else
		number = ft_atoi_base_from(nbr, base_from);
	result = ft_putnbr_base_to(number, base_to);
	return (result);
}
