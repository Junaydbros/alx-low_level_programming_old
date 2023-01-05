#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string to be printed
 * Return: the string length
 */

void _puts_recursion(char *s)
{
	int m = 0;

	if (s[m] != '\0')
	{
		return;
	}

	_putchar(s[m]);
	m++;
	_putchar('\n');
}
