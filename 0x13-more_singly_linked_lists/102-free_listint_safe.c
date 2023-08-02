#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * free_listint_safe -  nsert the new node
 * @h: variable one
 *
 * Return: success
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}

		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
