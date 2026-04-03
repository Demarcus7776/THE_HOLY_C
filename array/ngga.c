#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int space = 0;

    if (ac == 2)
    {
        while (av[1][i] == ' ')
            i++;

        while (av[1][i])
        {
            if (av[1][i] == ' ')
                space = 1;
            else
            {
                if (space)
                    write(1, " ", 1);
                write(1, &av[1][i], 1);
                space = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
