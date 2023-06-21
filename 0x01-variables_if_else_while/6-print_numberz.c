#include <stdio.h>
/**
 * main -funtion that numbers with putchar
 *
 * Return: putchar to print numbers
 */
int main(void)
{
	int q;

	for (q = 48; q < 58; q++)
		putchar(q);
	putchar('\n');

	return (0);
}

