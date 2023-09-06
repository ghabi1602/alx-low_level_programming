#include "main.h"

/**
 * reverse_array - function that reverses an array
 * Description: function that reverses an array
 * @a: Array of integers
 * @n: number of elements
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	n--;
	while (n > i)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
		i++;
	}
}
