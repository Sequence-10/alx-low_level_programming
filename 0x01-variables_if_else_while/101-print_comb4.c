#include <stdio.h>
#include <stdlib.h>
/**
 * main -three digit number
 *
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);

				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

