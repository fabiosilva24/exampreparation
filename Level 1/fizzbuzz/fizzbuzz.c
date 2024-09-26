#include <unistd.h>

void ft_print_nmbr(int nmbr)
{
    char str[] = "0123456789";

    if (nmbr >= 10)
        ft_print_nmbr(nmbr / 10);
    write(1, &str[nmbr % 10], 1);
}

int main()
{
    int nmbr = 1;

    while (nmbr <= 100)
    {
        if (nmbr % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (nmbr % 3 == 0)
            write(1, "fizz", 4);
        else if (nmbr % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_print_nmbr(nmbr);
        nmbr++;
        write(1, "\n", 1);
    }
}