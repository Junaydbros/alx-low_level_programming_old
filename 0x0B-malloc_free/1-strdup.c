#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string provided as a parameter.
 * @str: the source string
 * Return: returns a pointer to the duplicated string
 * also returns NULL if available memory is insufficient
 */

char *_strdup(char *str)
{
	char *copy;
	int a, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < len; a++)
	{
		copy[a] = str[a];
		copy[len] = '\0';
	}

		return (copy);
}
