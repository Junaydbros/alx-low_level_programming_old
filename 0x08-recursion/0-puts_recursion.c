#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 * Return: the string length
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	s++;
	_putchar('\n');
}
