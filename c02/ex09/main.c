##nclude <stdio.h>

int	is_numeric(char c);

int	is_lowercase(char c);

int	is_uppercase(char c);

char	ft_strcapitalize(char *str);

int	main()
{
	char str[] = " salLt, comMent tu   vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%c", ft_strcapitalize(str));
	return(0);
}
