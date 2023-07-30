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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
