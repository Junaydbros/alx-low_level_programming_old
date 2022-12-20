#include "main.h"
/**
 * _strlen - a function that return the length of a string
 * @s: character to be checked
 * Return: Always 0
 */
int _strlen(char *s)
{
	int d = 0;

	for (; *s++;)
		d++;
	return (d);
}
