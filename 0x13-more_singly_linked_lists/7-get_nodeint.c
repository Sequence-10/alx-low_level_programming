#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * get_nodeint_at_index -  increment the new node to the begiining of the list
 * @head: variable one
 * @index: varaible two
 *
 * Return: success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *runner;

	if (head == NULL)
		return (0);

	runner = head;

	while (index != 0)
	{
		runner = runner->next;
		index--;

		if (runner = NULL)
			return (0);
	}

	return (runner);
}
