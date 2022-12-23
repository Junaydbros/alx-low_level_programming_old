#include "main.h"
/**
 * _strncat - function that concatenates two strings using at most n bytes
 * @src: string to be appended
 * @dest: resulting new string
 * @n: number of bytes to be used from src
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
