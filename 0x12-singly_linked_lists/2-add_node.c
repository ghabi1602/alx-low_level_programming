#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a node to a list
 * @head: head of a list list_t
 * @str: string to add within the list
 * Return: pointer of type list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int len1 = 0;

	while (str[len1] != '\0')
		len1++;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = len1;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
