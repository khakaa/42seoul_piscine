int     is_printable(char c)
{ 
        if(33 <= c && c <= 126)
                return(1);
        return(0);
}

int     ft_str_is_printable(char *str)
{
        int i;

        i = 0;
        while(str[i])
                if(!is_printable(str[i++]))
                        return(0);
        return(1);
}

