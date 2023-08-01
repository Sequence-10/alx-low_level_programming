#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * *insert_nodeint_at_index -  nsert the new node
 * @head: variable one
 * @idx: variable two
 * @n: last variable
 *
 * Return: success
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *runner;
	listint_t *new;

	if (head == NULL)
		return (0);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);

	new->next = NULL;
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (new);
	}

	runner = *head;

	while (idx != 1)
	{
		runner = runner->next;
		--idx;

		if (runner == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = runner->next;
	runner->next = new;

	return (new);
}
