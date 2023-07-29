#include "lists.h"
#include <string.h>

/**
 * *add_node - a node to a linked list head
 * @head: linked list head
 * @str: string element of the linked list
 * Return: exact number
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ben;
	int len_str;

	ben = (list_t *) malloc(sizeof(list_t));

	if (ben == NULL)
	{
		free(ben);
		return (NULL);
	}

	ben->str = strdup(str);
	if (ben->str == NULL)
	{
		free(ben);
		return (NULL);
	}
	for (len_str = 0; str[len_str] != '\0';  len_str++)
		;

	ben->len = len_str;
	ben->next = *head;
	*head = ben;

	return (ben);
}
