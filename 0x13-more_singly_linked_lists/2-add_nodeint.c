#include "lists.h"
#include <stdio.h>

/**
 * *add_nodeint - increment the new node to the begiining of the list
 * @head: bariable one
 * @n: variabel two
 *
 * Return: success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
