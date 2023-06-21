#include "main.h"
/**
 *  print_alphabet -print alphabets in lower case
 *
 *  Return: success
 */

void print_alphabet(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

