#include "main.h"
/**
 * _strcpy - a function that copies an 'src' pointed string
 * @dest: character to be checked
 * @src: character to be checked
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
		dest[b] = src[b];
	dest[b] = '\0';
	return (dest);
}
