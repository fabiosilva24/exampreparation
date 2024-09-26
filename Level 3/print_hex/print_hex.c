#include <unistd.h>

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;

    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return (sign * result);
}
    
void print_hex(int n)
{
    char hexa[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &hexa[n % 16], 1);
}

int main(int argc, char **argv)
{

    if (argc == 2)

        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}