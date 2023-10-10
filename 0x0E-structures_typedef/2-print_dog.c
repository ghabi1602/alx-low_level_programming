#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog variable
 * @d: struct dog variable
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %0.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
