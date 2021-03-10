char   ft_putnbr_base(int nbr, char *base)
{
    int i;
    int base_l;
    char *result;

    base_l = ft_strlen(base);
    i = 0;
    if (check_base(base))
    {
        while (nbr)
        {
            nbr_result[i] = nbr % base_l;
            nbr = nbr / base_l;
        }
            

}