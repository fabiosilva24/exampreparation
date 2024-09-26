#include <unistd.h>

void ft_putchar(int n)
{
    char digits;

    if (n >= 10)
        ft_putchar(n / 10);
    digits = (n % 10) + '0';
    write(1, &digits, 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    ft_putchar(argc - 1);
    write(1, "\n", 1);
}