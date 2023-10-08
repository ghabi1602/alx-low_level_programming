#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a new space of memory
 * @ptr: pointer to an allocated memory space
 * @old_size: integer
 * @new_size: integer
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL && new_size != 0)
	{
		p = malloc(sizeof(char) * new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}
	else if (ptr == NULL && new_size == 0)
		return (NULL);

	if (new_size > old_size)
	{
		p = malloc(sizeof(char) * new_size);
		if (p == NULL)
			return (NULL);
		free(ptr);
		return (p);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(sizeof(char) * new_size);
	if (p == NULL)
		return (NULL);

	free(ptr);
	return (p);

}
