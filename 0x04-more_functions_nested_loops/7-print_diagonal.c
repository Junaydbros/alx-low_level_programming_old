#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: shows the number of times character would be printed
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
