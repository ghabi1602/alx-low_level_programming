#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node
 * @head: head of a list
 * @index: index of the node to be deleted
 * Return: int _ 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *p;
	unsigned int i;

	ptr = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && ptr != NULL; i++)
			ptr = ptr->next;
	}
	if (ptr == NULL || (ptr->next == NULL && index != 0))
	{
		return (-1);
	}
	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
	}
	else
	{
		for (i = 0; i < index; i++)
			ptr = ptr->next;
		p = ptr->next;
		free(ptr);

		ptr = *head;
		for (i = 0; i < index - 1; i++)
			ptr = ptr->next;
		ptr->next = p;
	}
	return (1);
}
