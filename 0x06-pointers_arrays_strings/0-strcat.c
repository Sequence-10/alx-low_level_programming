#include "main.h"

/**
 * _strcat - function to concatenate
 * @dest: holds the first word to be concatenated
 * @src: the concatenated word
 * Return: success
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
