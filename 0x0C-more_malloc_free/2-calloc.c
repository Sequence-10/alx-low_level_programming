#include "main.h"
/**
 * *_calloc - validate the process
 * @nmemb: container for the first input
 * @size: variable handler
 *
 * Description: This project deal with mallo free
 *
 * Return: success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);
	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
