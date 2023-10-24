#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node to the list
 * @n: integer to be added to the list
 * @head: the head of a list
 * Return: pointer to the new element added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (*head == NULL)
	{
		ptr->next = NULL;
		*head = ptr;
	}
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
