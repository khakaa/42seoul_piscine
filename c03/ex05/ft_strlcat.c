
int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				i;
	int				j;
	unsigned int	d_len;
	int				s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	j = d_len;
	i = 0;
	while (*src && i < (int)(size - d_len - 1))
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	if (size < d_len)
		s_len += size;
	else
		s_len += d_len;
	return (s_len);
}
