#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint_safe -  nsert the new node
 * @head: variable one
 *
 * Return: success
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t oscar = 0;
	long int bista;

	while (head)
	{
		bista = head - head->next;
		oscar++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (bista > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (oscar);
}
