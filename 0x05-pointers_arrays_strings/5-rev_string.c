#inclide "main.h"
/**
 * rev_string - function that reverses
 * @s: pointer
 *Return: success
 */

void rev_string(char *s)
{
	int bob;
	int pok;
	char tok[20];

	bob = strlen(s);
	for (pok = bob; pok > 0; pok--)
	{
		tok[bob - pok] = s[pok - bob];
	}
	for (pok = 0; pok < bob; pok++)
	{
		s[pok] = tok[pok];
	}
}
