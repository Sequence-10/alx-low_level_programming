#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i])
		i++;
	if (i % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}

	_putchar('\n');
}
