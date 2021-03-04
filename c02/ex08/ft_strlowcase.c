
int		check_lowcase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (check_lowcase(str[i]))
		{
			str[i] = str[i] + 32;
			++i;
		}
	}
	return (str);
}
