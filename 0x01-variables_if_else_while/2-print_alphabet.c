#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function that print all alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}

