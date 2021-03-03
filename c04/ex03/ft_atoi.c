int	ft_atoi(char *str)
{
	int	result;
	int sign;

	result = 0;
	sign = 1;
	while(*str == ' ' ||
			*str == '\n' ||
			*str == '\t' ||
			*str == '\v' ||
			*str == '\f' ||
			*str == '\r')
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign *=  -1;
		str++;
	}
	while(*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += sign * (*str - '0');
		str++;
	}
	return (result);
}
