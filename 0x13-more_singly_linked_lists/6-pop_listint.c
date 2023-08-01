#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * pop_listint - increment the new node to the begiining of the list
 * @head: variable one
 *
 * Return: success
 */

int pop_listint(listint_t **head)
{
	listint_t *runner;
	int oscar;

	if (head == NULL)
		return (0);

	runner = *head;
	if (runner = NULL)
		return (0);

	oscar = runner->n;
	*head = runner->next;
	free(runner);
	return (oscar);
}
