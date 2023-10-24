#include "lists.h"

/**
 * sum_listint - gets the sum of a list data
 * @head: head of a list
 * Return: sum of the list data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	if (!head)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
