#include "main.h"
/**
 * factorial - just you read
 * @n: hold it for me
 * Return: success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
