#include <stdio.h>
#include <stdlib.h>
/**
 * main - the function that prints both upper and  lowetr case letter
 *
 * Return: 0
 */
int main(void)
{
	char lowerCase;
	char upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
		putchar(lowerCase);
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
		putchar(upperCase);
	putchar('\n');
	return (0);
}

