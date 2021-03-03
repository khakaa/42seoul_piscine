#include <stdio.h>

int	ft_strlen(char *dest)
{
	int i;

	i = 0;
	while(dest[i] != '\0')
		i++;
	return(i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int d_i;
	int s_i;

	s_i = 0;
	d_i = ft_strlen(dest);
	
	while(s_i < nb && src[s_i] != '\0')
	{
		dest[d_i++] = src[s_i++];
	}
	dest[d_i] = '\0';	
	
	return(dest);
}
