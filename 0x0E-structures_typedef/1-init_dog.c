#include "dog.h"
#define NULL ((void *)0)

/**
 * init_dog - initialize a structure
 * @d: struct of type dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
