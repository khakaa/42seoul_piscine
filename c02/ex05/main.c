#include <stdio.h>

int     is_uppercase(char c);

int     ft_str_is_uppercase(char *str);

int     main(void)
{
        char str[] = "AAA";

        printf("%d", ft_str_is_uppercase(str));
        return(0);
}

