#include "dog.h"
#include <stdio.h>
#define NULL ((void *)0)

/**
 * print_dog - prints a variable of type struct dog
 * @d: a variable of struct dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("%s\n", d->name);
	printf("%f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("%s\n", d->owner);
}
