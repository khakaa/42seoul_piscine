
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = --argc;
	while (i >= 1)
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
