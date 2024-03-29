#include "function_pointers.h"

/**
 * print_name - Dealing with function pointers that will print names
 * @name: holds the name to be printed
 * @f: the main worker
 * Return: empty output
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
