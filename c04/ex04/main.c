#include <stdio.h>

int	ft_strlen(char *c);

int check_base(char *base);

void	ft_putchar(char c);

void	ft_putnbr_base(int nbr, char *base);

int	main()
{
	char base[] = "qwerty";
	ft_putnbr_base(10, base);
}
