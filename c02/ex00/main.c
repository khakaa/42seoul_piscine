#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);

int     main(void)
{
        char src[] = "hello42";
        char dest[30];
	
	ft_strcpy(dest, src);
        printf("%s", dest);
        return(0);
}
