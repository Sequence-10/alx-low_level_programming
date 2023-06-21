#include <stdio.h>
/**
 * main - print sum of multiples of 3, 5 etc
 * Return: Success
 */

int main(void)
{
	int i, j = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}

