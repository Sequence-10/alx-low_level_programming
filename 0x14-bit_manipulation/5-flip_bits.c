#include "main.h"

/**
 * flip_bits - a function that returns the num of bits
 * @n: player 1
 * @m: players 2
 * Return: flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int coins;
	unsigned int i = 0;

	coins = n ^ m;
	while (coins > 0)
	{
		i++;
		coins &= (coins - 1);
	}
	return (i);
}

