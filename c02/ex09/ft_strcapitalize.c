
int		is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int     is_lowercase(char c)
{
	if ('a' <= c && c <= 'z')
		 return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (is_lowercase(str[0]))
	{
		str[0] = str[0] - 32;
	}

	i = 1;
	while (str[i] != '\0')
	{
		if (!(is_lowercase(str[i-1]))
			&& !(is_uppercase(str[i-1]))
			&& !(is_numeric(str[i-1])))
			{
				if (is_lowercase(str[i]))
					str[i] = str[i] - 32;
			}
		else if (is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
