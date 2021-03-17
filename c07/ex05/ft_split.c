#include <stdlib.h>

int		str_is_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		str_count(char *str, char *charset)
{
	int	cnt;
	int	i;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (!str_is_in_charset(str[i], charset))
		{
			++cnt;
			while (str[i] && !str_is_in_charset(str[i], charset))
				i++;
		}
		else if (str[i] != '\0')
			i++;
	}
	return (cnt);
}

void	ft_strcpy(char *res, char *from, char *to)
{
	while (from < to)
		*(res++) = *(from++);
	*res = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		amount;
	char	*from;
	int		i;

	i = 0;
	amount = str_count(str, charset);
	res = (char **)malloc(sizeof(char *) * amount + 1);
	while (*str)
	{
		if (!str_is_in_charset(*str, charset))
		{
			from = str;
			while (*str && !str_is_in_charset(*str, charset))
				str++;
			res[i] = (char *)malloc(str - from + 1);
			ft_strcpy(res[i++], from, str);
		}
		str++;
	}
	res[i] = 0;
	return (res);
}
