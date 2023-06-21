#include "main.h"
/**
 * print_alphabet_x10 - prints letters 10 times
 * Return: succes
 */

void print_alphabet_x10(void)
{
	char letter;
	int a;

	a = 0;
	while (a < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		a++;
	}
}

