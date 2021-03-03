char	*ft_strstr(char *str, char *to_find)
{
	int cnt = -1;

	if (!*to_find)	
		return (str);
	while (*str)
	{
		while (*str == *to_find && *to_find)
		{
			to_find++;
			cnt++;
		}
		if (*to_find == '\0')
			return(str-cnt);
		str++;
	}
	return(0);
}
