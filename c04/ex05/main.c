#include <stdio.h>

int	ft_strlen(char *str);

int	check_base(char *base);

int	get_index(char c, char *base);

int	ft_atoi_base(char *str, char *base);

int	check_whitespace_minus(char *str);

int	main()
{
	char str[] = "\n\t--++-10q";
	char base[] = "01";

	printf("%d",ft_atoi_base(str,base));
}