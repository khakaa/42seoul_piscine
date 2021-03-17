#include <unistd.h>

int	main()
{
	char i;
	char j;

	i = 'z';
	while (i >= 'a')
	{
		if (i % 2 == 0)
		{
			write(1, &i, 1);
		}
		else if(i % 2 == 1)
		{
			j = i - 32;
			write(1, &j, 1);
		}
		i--;
	}
	write(1, "\n", 1);
}
