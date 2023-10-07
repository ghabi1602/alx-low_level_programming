#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates a memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}
