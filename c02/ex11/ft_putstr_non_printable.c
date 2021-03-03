#include <unistd.h>

int		is_printable(unsigned char c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}

void	write_hex(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	dec_to_hex(unsigned char c)
{
	write(1, "\\", 1);
	write_hex((int)c / 16);
	write_hex((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!is_printable(*str))
			dec_to_hex(*str);
		else
			write(1, str, 1);
		++str;
	}
}
