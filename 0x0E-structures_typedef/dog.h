#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
