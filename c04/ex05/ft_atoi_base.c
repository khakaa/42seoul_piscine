
int		g_base_l;

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		check_base(char *base)
{
	int		i;
	int		j;

	if (base[0] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] >= '\t' && base[i] <= '\r')
			return (0);
		if (g_base_l == 1 || g_base_l == 0)
			return (0);
		else if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 1 + i;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		get_index(char c, char *base)
{
	int		i;

	i = 0;
	while (i < g_base_l)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		check_whitespace_minus(char str)
{
	if (str == ' ' || str == '+' || (str >= '\t' && str <= '\r'))
		return (1);
	else if (str == '-')
		return (-1);
	else
		return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		result;
	int		i;

	g_base_l = ft_strlen(base);
	i = 0;
	sign = 1;
	result = 0;
	while (check_whitespace_minus(str[i]))
	{
		sign *= check_whitespace_minus(str[i]);
		i++;
	}
	if (check_base(base))
	{
		while (str[i])
		{
			if (get_index(str[i], base) == -1)
				break ;
			result *= g_base_l;
			result += get_index(str[i], base);
			i++;
		}
	}
	return (sign * result);
}
