#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * delete_nodeint_at_index -  nsert the new node
 * @head: variable one
 * @index: variable two
 *
 * Return: success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *runner;
	listint_t *tmp;

	if (head == NULL || (*head) == NULL)
		return (-1);

	runner = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(runner);
		return (1);
	}

	while (index != 1)
	{
		if (runner->next == NUL)
			return (-1);

		runner = runner->next;
		--index;
	}
	tmp = runner->next;
	if (runner->next)
		runner->next = runner->next->next;
	else
		runner->next = NULL;
	free(tmp);

	return (1);
}
