#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int     main()
{
	char str[] = "hello im harpark nice to meet you";
	char to_find[] = "i";
	printf("%s",ft_strstr(str, to_find));
}
