#include <stdio.h>
#include <string.h>
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
	int i;

	for (i = 0; i < strlen(s) && i < strlen(accept); i++)
	{
		if (s[i] != accept[i])
		{
			break;
		}
	}
	return (i);
}
