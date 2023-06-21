#include "main.h"
/**
 * _isalpha - check for alphabetic char
 * @c: hold the char
 * Return: success
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

