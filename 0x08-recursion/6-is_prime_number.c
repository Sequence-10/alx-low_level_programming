#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - output the prime
 * @n: hold it for me
 * Return: success
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - output only primes
 * @n: hold the first one
 * @i: hild the second
 * Return: success
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
