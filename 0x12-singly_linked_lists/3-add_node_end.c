#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: head of a list list_t
 * @str: string to be added to the list
 * Return: Address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int len1 = 0;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	while (str[len1] != '\0')
		len1++;

	new->str = strdup(str);
	new->len = len1;
	new->next = NULL;

	temp  = *head;
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (new);
}
