#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - a function that create an array of char
 * @s1: hold the function for me
 * @s2: hold the second one for me
 * Return: success
 */
char *str_concat(char *s1, char *s2)
{
	int m = 0, n = 0, q = 0, r = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[m])
		m++;
	while (s2[n])
		n++;
	q = m + n;
	ptr = malloc((sizeof(char) * q) + 1);
	if (ptr == NULL)
		return (NULL);
	n = 0;
	while (r < q)
	{
		if (r <= m)
			ptr[r] = s1[r];

		if (r >= m)
		{
			ptr[r] = s2[n];
			n++;
		}
		r++;
	}
	ptr[r] = '\0';
	return (ptr);
}

