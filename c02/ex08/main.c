#include <stdio.h>
  
int     check_lowcase(char c);

char    *ft_strlowcase(char *str);

int     main(void)
{
        char str[] = "HELLO";

        printf("%s", ft_strlowcase(str));
        return(0);
}

