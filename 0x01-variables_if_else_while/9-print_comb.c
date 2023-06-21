#include <stdio.h>
#include <stdlib.h>
/**
 * main -singles numbers with sapec
 *
 * Return: Success
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

