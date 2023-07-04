#include "main.h"
/**
 * string_toupper - function to changes all lowercas to uppercase
 * @s: hold  the string
 * Return: Success
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
