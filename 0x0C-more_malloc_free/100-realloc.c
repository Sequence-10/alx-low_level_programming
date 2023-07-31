#include "main.h"
/**
 * *_realloc - Dealing with malloc
 * @ptr: hold it for me
 * @old_size: hold the second one
 * @new_size: hold the next one
 * Return: success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
			return (NULL);
		return (str);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	str = malloc(new_size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		str[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (str);
}

