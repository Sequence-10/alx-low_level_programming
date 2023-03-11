#include "main.h"
/**
 * _strlen_recursion - give me length of it
 * @s: hold it for me
 * Return: success for me
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
