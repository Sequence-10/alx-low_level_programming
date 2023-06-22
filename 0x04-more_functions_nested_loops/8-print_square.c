#include "main.h"
/**
 * print_square - print a square
 * @size: holds the size
 * Return: success
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}

