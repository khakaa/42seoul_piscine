#include <unistd.h>

void	print(char num1[], char num2[])
{
	write(1, &num1[0], 1);
	write(1, &num1[1], 1);
	write(1, " ", 1);
	write(1, &num2[0], 1);
	write(1, &num2[1], 1);

	return;
}

void	rear_num(char num1[], char num2[])
{
	num2[0] = '0';
	while(num2[0] <= '9')
	{
		num2[1] = '0';
		while(num2[1] <= '9')
		{
			if(num1[0] <= num2[0])
			{
				if(num1[0] == num2[0] && num1[1] >= num2[1])
				{
					num2[1]++;
					continue;
				}
				print(num1, num2);
				if(!(num1[0] == '9' && num1[1] == '8'))
					write(1, ", ", 2);
			}
			num2[1]++;
		}
		num2[0]++;
	}
	return;
}		

void	front_num(char num1[], char num2[])
{
	while(num1[0] <= '9')
	{
		num1[1] = '0';
		while(num1[1] <= '9')
		{
			rear_num(num1, num2);
			num1[1]++;
		}
		num1[0]++;
	}
	return ;
}

void	ft_print_comb2(void)
{
	char num1[2];
     	char num2[2];

	num1[0] = '0';
	num1[1] = '0';
	num2[0] = '0';
	num2[1] = '1';
	front_num(num1, num2);

	return;
} 	
