#include "main.h"
/**
 * _islower - check for lowercase
 * @c: hold char
 * Return: success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

