#include <stdio.h>
/**
 * main -function to print reverse alphabets
 *
 * Return: output success
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');

	return (0);
}

