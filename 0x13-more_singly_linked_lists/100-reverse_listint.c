#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the linked list
 * Return: pointer to the first element after reversing
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (*head == NULL)
		return (NULL);


	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
