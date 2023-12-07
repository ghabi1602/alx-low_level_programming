#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of a list's data
 * @head: the head of the list
 * Return: the sum of the list's data(integer)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum;

	if (!head)
		return (0);

	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
