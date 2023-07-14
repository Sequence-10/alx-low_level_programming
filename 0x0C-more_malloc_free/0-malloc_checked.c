#include "main.h"
/**
 * *malloc_checked - validating the malloc
 * @b: a container for the process
 * Return: success as always
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
