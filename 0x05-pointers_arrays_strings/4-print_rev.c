#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string to be reverse printed
 * Return: Always 0
 */
void print_rev(char *s)
{
	int m, p;

	p = 0;
	while (s[p] != '\0')
		p++;

	for (m = p - 1; m >= 0; m--)
	{
		_putchar(s[m]);
	}
	_putchar('\n');
}
