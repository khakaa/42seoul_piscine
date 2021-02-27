#include <unistd.h>

void	ft_print_reverse_alphabet(void);

int	main()
{
	ft_print_reverse_alphabet();
}

void	ft_print_reverse_alphabet(void)
{
	char r_a;

	r_a = 'z';
	while(r_a >= 'a')
	{
		write(1, &r_a, 1);
		r_a--;
	}
}
