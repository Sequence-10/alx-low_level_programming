#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	unsigned int n, sum = 0;
	char *p;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			p = argv[m];
			for (n = 0; n < strlen(p); n++)
			{
				if (p[n] < 48 || p[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(p);
			p++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
