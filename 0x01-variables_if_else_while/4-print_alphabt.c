#include <stdio.h>
#include <stdlib.h>
/**
 *main -The function will print all letterws except q & e
 *
 *Return: all sucess except q&e
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');

	return (0);
}

