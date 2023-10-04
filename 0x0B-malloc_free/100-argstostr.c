#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *argstostr - concatinates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	char *ss;
	int i, len, j, k, chlen, c;


	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (c = 0; av[i][c] != '\0'; c++)
		{
			len++;
		}
		len++;
	}
	len++;

	ss = malloc(sizeof(char) * len);
	if (ss == NULL)
	{
		free(ss);
		return (NULL);
	}

	chlen = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++, chlen++)
		{
			*(ss + chlen) = av[j][k];
		}
		*(ss + chlen) = '\n';
		chlen++;
	}
	return (ss);
}
