#include "lists.h"
#include <stdio.h>

/**
 * print_list - responsible for printing the linked list
 * @h: that's the linked list
 *
 * Return: the exact nodes
 */

size_t print_list(const list_t *h)
{
	size_t log_nodes = 0;
	const list_t *runner = h;

	while (runner != NULL)
	{
		printf("[%d]%s\n", runner->len, runner->str != NULL ? runner ->str : "(nil)");
		runner = runner->next;
		log_nodes++;
	}
	return (log_nodes);
}
