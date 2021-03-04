
int	ft_iteractive_power(int nb, int power)
{
	int	result;

	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
