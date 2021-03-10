#include <stdio.h>

int	ft_strlen(char *str);

int	check_base(char *base);

int	get_index(char c, char *base);

int	ft_atoi_base(char *str, char *base);

int	check_whitespace_minus(char *str);

int	main()
{
	char str[] = "\n\t--++-30";
	char base[] = "0123456789";

	printf("%d",ft_atoi_base(str,base));
}
