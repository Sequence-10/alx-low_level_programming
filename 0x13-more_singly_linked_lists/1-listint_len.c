#include "list.h"
#include <stdio.h>

/**
 * listint_len - give out the number of element in the linked list
 * @h: variabel for the task
 *
 * Return: success
 */

size_t listint_len(const listint_t *h)
{
	size_t nbr_member = 0;
	const listint_t *runner = h;

	while (runner != NULL)
	{
		runner = runner->next;
		nbr_member++;
	}
	return (nbr_member);
}
