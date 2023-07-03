#include "main.h"
  
/**
 * _strncpy - function to copy
 * @dest: word to copy
 * @src: word to copy
 * @n: word to copy
 * Return: success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		;
	}
	for (a = 0; dest[a] != '\0'; a++)
	{
		if (n < b)
		{
			if (a < n)
			{
				dest[a] = src[a];
			}
		}
		else
		{
			if (a < b)
			{
				dest[a] = src[a];
			}
			else if(a < n)
			{
				dest[a] = '\0';
			}
		}
	}
	dest[a] = '\0';
	return (dest);
}
