#include <stdio.h>

int	check_upcase(char c);

char	*ft_strupcase(char *str);

int     main(void)
{
        char str[] = "asdfs!!fs";

        printf("%s", ft_strupcase(str));
        return(0);
}
