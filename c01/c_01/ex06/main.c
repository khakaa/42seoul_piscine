#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char str[8] = {'h','e','l','l','o','4','2'};

	printf("문자의 개수는 %d 개 입니다.", ft_strlen(str));
	return (0);
}
