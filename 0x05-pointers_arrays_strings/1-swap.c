#include "main.h"
/**
 * swap_int - swap them for me
 * @a: pointer a
 * @b: pointer b
 * Return: success
 */
void swap_int(int *a, int *b)
{
	int swap_it;

	swap_it = *a;
	*a = *b;
	*b = swap_it;
}
