#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees a struct dog_t type variable
 * @d: variable of type struct dog_t
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
