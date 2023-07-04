#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: the string
 *
 * Return: converted value or 0 on error
 */
int _atoi(char *s)
{
	int num_pos = 0, num_neg = 0, n = 0, i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '+')
			num_pos++;
		if (s[i] >= '0' && s[i] <= '9')
			break;

	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			num_neg++;
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + (s[i] - '0');
		else if (n != 0)
			break;
	}
	if (num_neg > num_pos)
		return (n * -1);

	return (n);
}
