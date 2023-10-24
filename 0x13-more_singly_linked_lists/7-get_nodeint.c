#include "lists.h"

/**
 * get_nodeint_at_index - gets a specific node
 * @index: index of the node
 * @head: head of the linked list
 * Return: pointer to the specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length = 0, i;
	listint_t *ptr = head, *p = head;

	while (ptr != NULL)
	{
		length++;
		ptr = ptr->next;
	}
	if (index > length)
		return (NULL);


	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	return (p);
}
