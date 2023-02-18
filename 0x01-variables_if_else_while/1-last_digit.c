#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main - the function gives the last of the number
 *Return: 0
 *
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int z; /* a variable that holds the last digit */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
	if (z == 0)
		printf("Last digit of %d is %d and is 0\n", n, z);
	if (z < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, z);
	/* your code goes there */
	return (0);

}
