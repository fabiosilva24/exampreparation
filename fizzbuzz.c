#include <unistd.h>

void	ft_number(int nmbr)
{
	char str[10] = "0123456789";
	
	if (nmbr > 9)
	ft_number(nmbr / 10);
	write(1, &str[nmbr % 10], 1);
}

int main()
{
	int number = 1;
	
	while (number <= 100)
	{
		if (number % 15 == 0)
		write(1, "fizzbuzz", 8);
	
		else if (number % 3 == 0)
		write(1, "fizz", 4);
		else if (number % 5 == 0)
		write(1, "buzz", 4);
		else
			ft_number(number);
		number++;
	write(1, "\n", 1);
	}
}
