#include "main.h"
/**
 * reset_to_98 - as it is said reset to 98
 * @n: holds the return
 * Retur: success
 */
void reset_to_98(int *n)
{
	int a = 70;
	*n = &a;
	*n = 98;
	_putchar(a);
}
