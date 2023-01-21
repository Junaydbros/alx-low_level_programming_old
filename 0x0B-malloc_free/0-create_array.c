#include "main.h"
#include <stdlib.h>

/**
 * create_array - fuunction that creates an array of chars,
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: initial value of the char
 * Return: NULL if size = 0 or
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(sizeof(char) * size);
	if (array = NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}

	return (array);
}
