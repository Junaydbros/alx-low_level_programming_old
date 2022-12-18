#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: shows the number of times character would be printed
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int j;

	for (j = '0'; j < n; j++)
	{
		_putchar('/');
	}
	_putchar('\n');
}
