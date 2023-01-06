#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first input string
 * @accept: second input string to be compared with the first
 * for corresponding characters
 * Return: number of bytes in the initial segment of first string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					i++;
			}
		}
		else
			return (i);
	}
	return (i);
}
