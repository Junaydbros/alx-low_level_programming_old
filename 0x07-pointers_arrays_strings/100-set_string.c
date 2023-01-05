#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: value of pointer to be set
 * @to: final pointer value
 */

void set_string(char **s, char *to)
{
	if (*s != NULL)
	{
		free(*s);
	}

	*s = malloc(sizeof(char) * (strlen(to) + 1));
	strcpy(*s, to);
}
