#include "main.h"
/**
 * _puts - a function that prints a string
 * @str: the string to be printed
 * Return: the string length
 */
void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
