#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * sum_listint -  increment the new node to the begiining of the list
 * @head: variable one
 *
 * Return: success
 */

int sum_listint(listint_t *head)
{
	listint_t *runner;
	int sum = 0;

	if (head == NULL)
		return (0);

	runner = head;

	while (runner != NULL)
	{
		sum += runner->n;
		runner = runner->next;
	}

	return (sum);
}
