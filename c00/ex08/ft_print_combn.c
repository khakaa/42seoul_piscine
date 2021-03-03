#include <unistd.h>

char g_num[10];
int gn;

void make_combn(int prev, int idx)
{
	if(idx == gn)
	{
		write(1, g_num, gn);
		if(g_num[0] != 10 - gn + 48)
		{	
			write(1, ",", 1);
		}
		return;
	}
	int num;

	num = prev + 1;
	while(num < 10)
	{
		g_num[idx] = num + 48;
		make_combn(num, idx + 1);
		num++;
	}
}

void ft_print_combn(int n)
{
	gn = n;
	
	make_combn(-1,0);
}

int main(void)
{
	ft_print_combn(2);
	return 0;
}
