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
	int i, j, m, n;

	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;
	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(sizeof(char) * (i + 1));
	if (dogg->name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dogg->owner = malloc(sizeof(char) * (j + 1));
	if (!dogg->owner)
	{
		free(dogg->name);
		free(dogg);
		return (NULL);
	}
	d = malloc(sizeof(char) * (i + 1));
	dd = malloc(sizeof(char) * (j + 1));
	for (m = 0; m < i; m++)
		d[m] = name[m];
	for (n = 0; n < j; n++)
		dd[n] = owner[n];
	dogg->name = d;
	dogg->age = age;
	dogg->owner = dd;
	return (dogg);
}
