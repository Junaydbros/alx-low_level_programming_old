#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first occurence in the string
 * @accept: matches one of the bytes, or @NULL: if no such byte
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		int j;

		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
