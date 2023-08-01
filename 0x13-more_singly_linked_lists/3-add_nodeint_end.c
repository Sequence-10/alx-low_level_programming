#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - increment the new node to the begiining of the list
 * @head: bariable one
 * @n: variabel two
 *
 * Return: success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *runner;
	listint_t *new_node;

	runner = *head;
	while (runner && runner->next != NULL)
	{
		runner = runner->next;
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (runner)
		runner->next = new_node;
	else
		*head = new_node;
	return (new_node);
}
