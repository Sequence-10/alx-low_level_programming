#include "lists.h"

void prints_str(void) __attribute__((constructor));

/**
 * first - short description
 *
 * Description: long description
 *
 * Return: return description
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
