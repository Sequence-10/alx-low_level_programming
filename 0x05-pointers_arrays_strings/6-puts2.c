#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	for (j = 0; j < i; j += 2)
		_putchar(str[j]);

	_putchar('\n');
}
