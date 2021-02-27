#include <unistd.h>

void	write_div_and_mod(int num)
{
	
	char div = num/10 + '0';
	char mod = num%10 + '0';
	
	write(1,&div,1);
	write(1,&mod,1);
}

void	ft_print_comb2(void)
{
	int fir;
	int sec;
	
	fir = 0;
	while(fir <= 98)
	{
		sec = fir + 1;
		while(sec <= 99)
		{
			write_div_and_mod(fir);
			write(1, " ", 1);
			write_div_and_mod(sec);
		
			if(!(fir == 98 && sec == 99))
			{
				write(1, ", ", 2);
			}
			sec++;
		}
		fir++;
	}
}
