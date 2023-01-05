#include <stdio.h>
#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: the string that holds the character
 * @c: the character to be located
 * Return: pointer to the first occurence of the character c in string s
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s);
		}
	}

	return (NULL);
}
