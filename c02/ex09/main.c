#include <stdio.h>

int	is_numeric(char c);

int	is_lowercase(char c);

int	is_uppercase(char c);

char	*ft_strcapitalize(char *str);

int	main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return(0);
}
