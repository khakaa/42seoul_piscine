#include <stdio.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
        char src[] = "hello 42";
        char dest[30];

        ft_strncpy(dest, src, 3);
        printf("%s", dest);
        return(0);
}

