#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses
 * @s: pointer
 * Return: success
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
	}
}
