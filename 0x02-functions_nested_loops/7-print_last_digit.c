#include "main.h"
/**
 * print_last_digit - get the last digit
 * Return: sucess
 */

int print_last_digit(int)
{
	int a;
	int n;

	if (n < 0)
	{
		n = -n;
		a = n / 10;
		a = n % 10;
		_putchar(a + '0');
	}
	return (a);
}
