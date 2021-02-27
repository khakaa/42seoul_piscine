#include <unistd.h>

void	print_num(char fir[], char sec[])
{
	write(1, &fir[0], 1);
	write(1, &fir[1], 1);
	write(1, " ", 1);
	write(1, &sec[0], 1);
	write(1, &sec[1], 1);
	return ;
}

void	second_num(char fir[], char sec[])
{
	sec[0] = '0';
	while (sec[0] <= '9')
	{
		sec[1] = '0';
		while (sec[1] <= '9')
		{
			if (fir[0] <= sec[0])
			{
				if (fir[0] == sec[0] && fir[1] >= sec[1])
				{
					sec[1]++;
					continue ;
				}
				print_num(fir, sec);
				if (!(fir[0] == '9' && fir[1] == '8'))
					write(1, ", ", 2);
			}
			sec[1]++;
		}
		sec[0]++;
	}
	return ;
}

void	first_num(char fir[], char sec[])
{
	while (fir[0] <= '9')
	{
		fir[1] = '0';
		while (fir[1] <= '9')
		{
			second_num(fir, sec);
			fir[1]++;
		}
		fir[0]++;
	}
	return ;
}

void	ft_print_comb(void)
{
	char	fir[2];
	char	sec[2];

	fir[0] = '0';
	fir[1] = '0';
	sec[0] = '0';
	sec[1] = '1';
	first_num(fir, sec);
	return ;
}

