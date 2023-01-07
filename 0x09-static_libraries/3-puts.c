#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: the string to be printed
 * Return: the string length
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
