
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    while(*str)
        i++;
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int sep_len;
    char *result;

    sep_len = ft_strlen(sep);
    result = (char *)malloc(sizeof(char) * (sep_len + size + 1 );
    if (size == 0)
    {
        result = (char*)malloc(sizeof(char));
        result[0] = 0;
        return (NULL);
    }



}

#include <stdio.h>

int main()
{
    char *strs = {"hello", "42o", "today", "ios0310"};
    char sep = "o";

    printf("p", ft_strjoin(strlen(strs), strs, sep));

}
