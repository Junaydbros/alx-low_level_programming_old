#include <stdio.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory region to be filled
 * @b: the constant byte to fill the memory
 * @n: the number of byte to fill in the memory
 * Return: filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int *a = (unsigned int *) s;

	while (n--)
	{
		*a++ = (unsigned char) b;
	}
	return (s);
}
