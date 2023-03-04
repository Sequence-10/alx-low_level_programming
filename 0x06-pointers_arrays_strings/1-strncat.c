include "main.h"

/**
 * _strcat - function to concatenate
 * @dest: holds the first word to be concatenated
 * @src: the concatenated word
 * @n: variables for them
 * Return: success
 */

char *_strcat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n &&  src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
