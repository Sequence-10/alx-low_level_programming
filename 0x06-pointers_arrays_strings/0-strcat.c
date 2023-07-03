#include "main.h"

/**
 * _strcat - function to concatenate
 * @dest: words to be concat
 * @src: word to be concat
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
