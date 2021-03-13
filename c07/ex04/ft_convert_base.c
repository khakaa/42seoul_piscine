char    *ft_convert_base(char *nbr, char *base_from, char *base_to);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}

int check_base(char *base)
{
    int i;
    int j;

    i = 0;
    while (*base)
    {
        if (base[i] >= '\t' && base[i] <= '\r')
            return (0);
        if (base[i] == ' ' || ft_strlen(base) == 1 || ft_strlen(base) == 0)
            return (0);
        else if (base[i] == '+' || base[i] == '-')
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int get_index(char c, char *base)
{
    int i;

    i = 0;
    while (i < ft_strlen(base))
    {
        if ( c == base[i])
            return (i);
        i++;
    }
    return (-1);
}

int check_white_space(char str)
{
    if (str == ' ' || str == '+' || (str >= '\t' && str <= '\r'))
        return (1);
    else if (str == '-')
        return (-1);
    else
        return (0);
}

int ft_atoi_base_from(char *nbr, char *base)
{
    int i;
    int sign;
    int result;
    
    i = 0;
    sign = 1;
    result = 0;
    while (check_white_space(nbr[i]))
    {
        sign *= check_white_space(nbr[i]);
        i++;
    }
    if (!check_base(base))
    {
        while (nbr[i])
        {
            if (get_index(nbr[i], base) == -1)
                break;
            result *= ft_strlen(base);
            result += get_index(nbr[i], base);
            i++;
        }
    }
    return (sign * result);
}

#include <stdio.h>

int main()
{
    char str[] = "   \t -+--bc1a";
	char base[] = "abcd";

	printf("%d",ft_atoi_base_from(str,base));
}