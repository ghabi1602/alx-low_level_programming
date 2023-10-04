#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int length(char *ch);
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

	chlen = -1;
	for (j = 0; j < ac; j++)
	{
		chlen++;
		for (k = 0; k < length(*(av + j)); k++)
		{
			*(ss + chlen) = av[j][k];
			chlen++;
		}
		*(ss + chlen) = '\n';
	}
	return (ss);
}

/**
 * length - returns the length of a string
 * @ch: string
 * Return: integer
 */
int length(char *ch)
{
	int n;

	n = 0;
	while (*(ch + n) != '\0')
		n++;
	return (n);
}
