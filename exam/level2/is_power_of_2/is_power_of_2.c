int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    return ((n == 1) ? 1 : 0);
}

// #include <stdio.h>
// int main ()
// {
//     printf ("%d\n", is_power_of_2(12));
//     printf ("%d\n", is_power_of_2(36));
//     printf ("%d\n", is_power_of_2(1024));
//     printf ("%d\n", is_power_of_2(16));
//     printf ("%d\n", is_power_of_2(128));
//     printf ("%d\n", is_power_of_2(56));
//     printf ("%d\n", is_power_of_2(8192));
// }