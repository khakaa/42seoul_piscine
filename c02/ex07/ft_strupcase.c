int	check_upcase(char c)
{
	if('a' <= c && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(check_upcase(str[i]))
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return(str);
}
