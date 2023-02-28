#inclide "main.h"
/**
 * rev_string - function that reverses
 * @s: pointer
 *Return: success
 */

void rev_string(char *s)
{
	int a;
	int b;
	char c[50];

	b = strlen(s);
	for (a = b; a > 0; a--)
	{
		c[b - a] = s[a - b];
	}
	for (a = 0; a < b; a++)
	{
		s[a] = c[a];
	}
}
