
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	s_i;
	int	d_i;

	s_i = 0;
	d_i = ft_strlen(dest);
	while (src[s_i])
		dest[d_i++] = src[s_i++];
	dest[d_i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		str_len;
	char	*result;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = 0;
		return (NULL);
	}
	i = 0;
	str_len = 0;
	while (i < size)
		str_len += ft_strlen(strs[i++]);
	result = malloc(sizeof(char) * (ft_strlen(sep) * (size - 1) + str_len + 1));
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

#include <stdio.h>
int		main()
{
	char	*strs[4];
	char	*sep;

	strs[4] = {"hello", "vv", "aaa", "bbb"};
	sep = ",";
	printf("%s", ft_strjoin(4, strs, sep));
}
