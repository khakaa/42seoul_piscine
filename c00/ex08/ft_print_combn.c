#include <unistd.h>

void	ft_print_combn(int n)
{
	char num[n];

	num[0] = 0 + '0';
	while(num[0] <= '8')
	{	
		num[1] = num[0] + 1;
		while(num[1] <= '9')
		{
			write(1, &num[0], 1);
			write(1, &num[1], 1);
			write(1, ", ", 2);
			num[1]++;
		}	
		num[0]++;
	}
	return ;	
}

		
