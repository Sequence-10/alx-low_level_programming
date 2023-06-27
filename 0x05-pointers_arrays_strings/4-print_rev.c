#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: pointer
 * Return: success
 */

void print_rev(char *s)
{
	int a_len = 0;

	while (s[a_len] != '\0')
	{
		a_len++;
	}
	a_len--;
	while (a_len >= 0)
	{
		_putchar(s[a_len]);
		a_len--;
	}
	_putchar('\n');
}
