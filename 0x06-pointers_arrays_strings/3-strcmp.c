#include "main.h"
/**
 * _strcmp - function to ccompare strings
 * @s1: holds the first string
 * @s2: holds the second string
 * Return: success
 */

int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; ; a++)
	{
		if (s1[a] == s2[a])
		{
			if (s1[a] == '\0' || s2[a] == '\0')
			{
				return (s1[a] - s2[a]);
			}
		}
		else
		{
			return (s1[a] - s2[a]);
		}
	}
}
