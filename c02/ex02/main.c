#include <stdio.h>

int	is_alpha(char c);

int	ft_str_is_alpha(char *str);

int     main(void)
{
        char str[] = "";

        printf("%d", ft_str_is_alpha(str));
        return(0);
}
