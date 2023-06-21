#include <stdio.h>
/**
 * main -function to print hexadicemal letters
 *
 * Return: print bases to 16
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
		putchar(a);

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}

