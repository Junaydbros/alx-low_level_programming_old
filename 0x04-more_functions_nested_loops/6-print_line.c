#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: number of times character would be printed
 * Return: a straight line
 */
void print_line(int n)
{
	int c;

	for (c = 0; c <= n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
