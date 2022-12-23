#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of
 * a string to uppercase
 * @s: the string
 * Return: uppercase letters
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (*(s + c))
	{
		if (*(s + c) >= 'a' && *(s + c) <= 'z')
			*(s + c) -= 'a' - 'A';
		c++;
	}
	return (s);
}
