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
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
