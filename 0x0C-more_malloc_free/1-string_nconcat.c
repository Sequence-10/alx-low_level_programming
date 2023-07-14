#include "main.h"
/**
 * *string_nconcat - validate the malloc
 * @s1: container for the first input
 * @s2: container for the second input
 * @n: variable handler
 * Return: Success as always
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n >= j)
		len2 = i + j;
	else
		len2 = i + n;
	str = malloc(sizeof(char) * len2 + 1);
	if (str == NULL)
		return (NULL);
	j = 0;
	while (len1 < len2)
	{
		if (len1 <= i)
			str[len1] = s1[len1];
		if (len1 >= i)
		{
			str[len1] = s2[j];
			j++;
		}
		len1++;
	}
	str[len1] = '\0';
	return (str);
}
