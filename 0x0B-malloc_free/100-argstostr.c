#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *argstostr - a function that create an array of char
 * @ac: hold the function for me
 * @av: hold the second one for me
 * Return: success
 */

char *argstostr(int ac, char **av)
{
	int alx = 0, m = 0, n = 0, q = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (m < ac)
	{
		while (av[m][n])
		{
			alx++;
			n++;
		}
		n = 0;
		m++;
	}
	ptr = malloc((sizeof(char) * alx) + ac + 1);

	m = 0;
	while (av[m])
	{
		while (av[m][n])
		{
			ptr[q] = av[m][n];
			q++;
			n++;
		}
		ptr[q] = '\n';

		n = 0;
		q++;
		m++;
	}
	q++;
	ptr[q] = '\0';
	return (ptr);
}

