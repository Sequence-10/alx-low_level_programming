#include "main.h"

/**
 * binary_to_uint - function that converts a binary num to an unsigned int
 * @b: directing it to its destination
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0;

	if (!b)
		return (0);

	while (b[j])
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		i <<= 1;
		i += b[j] - '0';
		j++;
	}
	return (i);
}
