#include "main.h"

/**
 * _strncat - function to concatenate
 * @dest: word to concat
 * @src: word to concat
 * @n: word to concat
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
