#include "main.h"
/**
 * _pow_recursion - do it like that
 * @x: hold the first one
 * @y: hold the second oe
 * Return: success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
