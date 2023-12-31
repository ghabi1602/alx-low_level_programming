#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array of integers
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!action)
		return;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
