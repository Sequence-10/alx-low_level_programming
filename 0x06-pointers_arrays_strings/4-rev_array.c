#include "main.h"
/**
 * reverse_array - function to reverse
 * @a: reverse first one
 * @n: record
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, mid;

	mid = (n + 1) / 2;
	for (j = 0; j < mid; j++)
	{
		n--;
		i = a[j];
		a[j] = a[n];
		a[n] = i;
	}
}
