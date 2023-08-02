#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * *reverse_listint -  nsert the new node
 * @head: variable one
 *
 * Return: success
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *oscar = NULL;
	listint_t *bister = NULL;

		while (*head)
		{
			next = (*head)->next;
			(*head)->next = oscar;
			oscar = *head;
			*head = next;
		}
	*head = oscar;

	return (*head);

}
