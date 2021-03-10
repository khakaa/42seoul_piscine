
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = 0;
	while (src[len])
		len++;
	if(!(ret = (char*)malloc(sizeof(char)*(len + 1))))
			return (NULL);
	ret[len] = '\0';
	while (--len >= 0)
		ret[len] = src[len];
	return (ret);
}
