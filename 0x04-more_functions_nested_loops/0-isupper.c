#include "main.h"
/**
 * _isupper -print upper case
 * @c: holds upper case letter
 * Return: succes
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

