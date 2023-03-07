#include "main.h"
/**
 * print_last_digit - print last digit
 * @last_digit: holds the value
 * Return: success
 */

int print_last_digit(int last_digit)
{
	/*_putchar((last_digit / 10) + '0');*/
	_putchar((last_digit % 10) + '0');

	return (last_digit);
}
