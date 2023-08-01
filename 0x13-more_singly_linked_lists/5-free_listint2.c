#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint2 - increment the new node to the begiining of the list
 * @head: variable one
 *
 * Return: success
 */

void free_listint2(listint_t **head)
{
	listint_t *runner;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		runner = *head;
		*head = (*head)->next;
		free(runner);
	}
}
