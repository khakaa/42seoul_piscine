#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main()
{
    char nbr[] = "---++--\n\n\t 100";
    char base_from[] = "0123456789abcdef";
    char base_to[] = "0123456789";

    printf("%s", ft_convert_base(nbr, base_from, base_to));
}