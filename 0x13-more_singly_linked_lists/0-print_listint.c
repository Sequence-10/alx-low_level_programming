#include "lists.h"
#include <stdio.h>

/**
 * print_listint - singly linked list
 * @h: integer
 *
 * Return: success
 *
 * Description: singly linked list node structure
 * 
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;
	const listint_t *runner = h;

	while (runner != NULL)
	{
		printf("%i\n", runner->n);
		runner = runner->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
