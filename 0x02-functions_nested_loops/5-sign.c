#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: hold the number
 * Return: success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		return (0);
	}
}
