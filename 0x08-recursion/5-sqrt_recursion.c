#include <stdio.h>
#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - give it away
 * @n: hold it for me
 * Return: success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - do as before
 * @n: hold the first one
 * @i: hold the second one
 * Return: success
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
