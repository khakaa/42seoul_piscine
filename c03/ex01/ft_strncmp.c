
int	ft_strncmp(char *s1, char *s2, unsigned n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		s1--;
		s2--;
	}
	return (*s1 - *s2);
}
