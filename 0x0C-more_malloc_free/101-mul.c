#include <unistd.h>
#include "main.h"
int main(int argc, char *argv[]);
void _puts(char *str);
void print_num(unsigned long int n);

int main(int argc, char *argv[])
{
	unsigned long int i, j, num, multiplier = 1;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		num = 0;

		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			{
				num = (num * 10) + (argv[i][j] - '0');
			}
			else
			{
				_puts("Error");
				exit(98);
			}
		}

		multiplier *= num;
	}
	print_num(multiplier);
	_putchar('\n');
	return (0);
}
{
	return (write(1, &c, 1));
}
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
void print_num(unsigned long int n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
