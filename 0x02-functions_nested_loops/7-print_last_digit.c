#include "main.h"
/**
 * print_last_digit - print last digit
 * @last_digit: holds the value
 * Return: success
 */

int print_last_digit(int last_digit)
{
	int holder;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		holder = last_digit % 10;
	}
	if (holder < 0)
	{
		holder = -holder;
		_putchar(holder + '0');
	}
	return (holder);

}
