#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: integer to be printed
 * Return: printed integer
 */
void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (b / 10)
	{
		print_number(b / 10);
	}

	_putchar(b % 10 + '0');
}
