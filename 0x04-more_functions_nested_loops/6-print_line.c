#include "main.h"
/**
 * print_line - draw a straight line in terminal
 * @n: holds the drawn line
 * Return: success
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	if (n > 0 || n <= 0)
	{
		_putchar('\n');
	}
}

