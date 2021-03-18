#include <unistd.h>

int main(int argc, char **argv)
{
    int length;
    int i;
    int j;

    length = 0;
    i = 0;
    j = 0;

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
        {
            while(argv[1][length])
                write(1, &argv[1][length++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}