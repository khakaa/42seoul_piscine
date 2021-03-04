
int		ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		d_i;
	int		s_i;

	s_i = 0;
	d_i = ft_strlen(dest);
	while (src[s_i] != '\0')
	{
		dest[d_i++] = src[s_i++];
	}
	dest[d_i] = '\0';
	return (dest);
}
