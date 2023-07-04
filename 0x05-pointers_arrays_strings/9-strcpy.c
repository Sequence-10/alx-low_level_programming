#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: pointer to buffer to copy to
 * @src: pointer to the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
