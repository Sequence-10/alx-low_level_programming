#include "main.h"
/**
 * _strlen - return the length
 * @s: pointer
 * Return: success
 */

int _strlen(char *s)
{
	int a_len = 0;

	while (*(s + a_len) != '\0')
	{
		a_len++;
	}
	return (a_len);
}
