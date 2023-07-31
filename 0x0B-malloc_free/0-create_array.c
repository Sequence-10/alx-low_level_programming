#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a function that create an array of char
 * @c: hold the function for me
 * @size: hold the second one for me
 * Return: success
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int m;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		ptr[m] = c;
	}
	return (ptr);
}
