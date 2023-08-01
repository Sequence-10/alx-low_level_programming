#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint - increment the new node to the begiining of the list
 * @head: bariable one
 *
 */

void free_listint(listint_t *head)
{
	listint_t *runner;
	listint_t *next;

	runner = head;

	while (runner != NULL)
	{
		next = runner->next;
		free(runner);
		runner = next;
	}
}
