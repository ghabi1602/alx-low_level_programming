#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: float
 * @owner: dog's owner name
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;
	char *d, *dd;
	int i, j;

	i = 0;
	while (name[i] != '\0')
		i++;

	j = 0;
	while (owner[j] != '\0')
		j++;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);

	
}
