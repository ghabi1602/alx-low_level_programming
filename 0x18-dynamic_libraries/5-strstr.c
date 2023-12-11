#include "main.h"
#define NULL 0

/**
 * *_strstr - locates a substring
 * Description: function that locates a substring
 * @haystack: The string to search
 * @needle: The search to search for
 *
 * Return: pointer of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, start = 0;
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < len && haystack[i] == needle[j]; j++, i++)
		{
			if (j == 0)
			{
				start = i;
			}
			if (j == len - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (NULL);

}
