#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Creates a copy of a string
 * @str: the string to copy
 * Return: pointerto the new memory space
 */
char *_strdup(char *str)
{
	int length, i;
	char *s;


	if (str == NULL)
		return (NULL);



	length = 0;
	while (*(str + length) != '\0')
	{
		length++;
	}


	s = malloc(sizeof(char) * length + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		*(s + i) = *(str + i);
	}

	return (s);


}
