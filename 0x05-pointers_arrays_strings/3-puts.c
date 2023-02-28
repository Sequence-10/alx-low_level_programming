#include "main.h"
/**
 * _puts - print a string
 * @str: pointer
 * Return: success
 */

void _puts(char *str)
{
	int a_len = 0;

	while (*(str + a_len) != '\0')
	{
		_putchar(str[a_len]);
		a_len++;
	}
	_putchar('\n');
}
