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
	int		temp;
	int		size;
	char	*result;
	int		base_length;

	base_length = ft_strlen(base);
	size = get_number_size(number, base);
	result = malloc(sizeof(char) * size);
	temp = number;
	if (check_base(base))
	{
		if (temp < 0)
			temp *= -1;
		if (number < 0)
			result[0] = '-';
		while (temp)
		{
			result[--size] = base[temp % base_length];
			temp = temp / base_length;
		}
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!base_from || !base_to)
		return (0);
	number = ft_atoi_base_from(nbr, base_from);
	result = ft_putnbr_base_to(number, base_to);
	return (result);
}
