#include <stdio.h>
#include "main.h"
/**
 * _memcpy - function that copies a memory area
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes that is copied by function
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *a = (unsigned char *) dest;
	unsigned char *b = (unsigned char *) src;

	while (n--)
	{
		*a++ = *b++;
	}
	return (dest);
}
