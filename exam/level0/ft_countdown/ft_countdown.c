#include <unistd.h>

void	ft_countdown(void)
{
	write(1, "9876543210", 10);
}

int main()
{
	ft_countdown();
}
