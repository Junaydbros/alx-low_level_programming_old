#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: shows the number of times character would be printed
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
