#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: directing it to the process
 * @index: output
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n &= ~i;
	return (1);
}
