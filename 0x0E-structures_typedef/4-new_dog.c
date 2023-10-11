#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *fill(char *s);
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
	char *dog_name, *dog_owner;

	if (!name || !owner)
		return (NULL);

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dog_name = fill(name);
	if (dog_name == NULL)
	{
		free(dogg);
		return (NULL);
	}
	dog_owner = fill(owner);
	if (dog_owner == NULL)
	{
		free(dog_name);
		free(dogg);
		return (NULL);
	}
	dogg->name = dog_name;
	dogg->age = age;
	dogg->owner = dog_owner;
	return (dogg);
}
/**
 * fill - fills a string
 * @s: string
 * Return: pointer to a string
 */
char *fill(char *s)
{
	int len, i;
	char *ch;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	ch = malloc(sizeof(char) * (len + 1));
	if (!ch)
		return (NULL);
	for (i = 0; i < len; i++)
		ch[i] = s[i];
	ch[i] = '\0';
	return (ch);
}
