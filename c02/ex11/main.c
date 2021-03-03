int	is_printable(unsigned char c);

void	write_hex(unsigned char c);

void	dec_to_hex(unsigned char c);

void	ft_putstr_non_printable(char *str);

int main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}
