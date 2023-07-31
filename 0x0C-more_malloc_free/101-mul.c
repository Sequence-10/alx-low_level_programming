#include <unistd.h>
#include "main.h"

/**
 * main - output main code
 * @argc: hold value one
 * @argv: hold the main
 * Return: success
 */
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

/**
 * _puts - output that exact value
 * @str: direct all of them
 * Return: success
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

/**
 * print_num - take control of the rest
 * @n: finish the job
 * Return: success
 */

void print_num(unsigned long int n)
{
	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
