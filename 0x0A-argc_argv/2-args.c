#include <stdio.h>
#include "main.h"
/**
 * main - argc and argv task
 * @argc: counter
 * @argv: vector for the string
 * Return: success
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}
	return (0);
}
