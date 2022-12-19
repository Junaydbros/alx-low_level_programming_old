#include "main.h"
/**
 * print_square - function that prints a square
 * @size: size of the square
 * Return: a square
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	int a;

	for (a = 0; a < (size); a++)
	{
		int b;

		for (b = 0; b < (size); b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

