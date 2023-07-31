#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a function that create an array of char
 * @str: hold the function for me
 * Return: success
 */
char *_strdup(char *str)
{
	int m = 0, n = 1;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n])
	{
		n++;
	}
	ptr = malloc((sizeof(char) * n) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (m < n)
	{
		ptr[m] = str[m];
		m++;
	}
	ptr[m] = '\0';
	return (ptr);

}

