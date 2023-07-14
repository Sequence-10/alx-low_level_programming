#include "main.h"
/**
 * *array_range - validate the process
 * @min: container for the first input
 * @max: container for the second input
 * Return: suceess as always
 */

int *array_range(int min, int max)
{
	int *ptr, i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] + min;
		i++;
		min++;
	}
	return (ptr);
}
