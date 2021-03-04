#include <unistd.h>

int		ft_strlen(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	if(base[0] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == ' ' || ft_strlen(base) == 1 || ft_strlen(base) == 0)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		else if (base[i] < 32 || base[i] > 126)
			return (0);
		j = 1 + i;
		while(base[j])
		{
			if(base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int base_l;
	int nbr_result[50];

	base_l = ft_strlen(base);
	i = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		while (nbr != 0)
		{
			nbr_result[i] = nbr % base_l;
			nbr = nbr / base_l;
			i++;
		}
		while (--i >= 0)
		{
			ft_putchar(base[nbr_result[i]]);
		}
	}
}
