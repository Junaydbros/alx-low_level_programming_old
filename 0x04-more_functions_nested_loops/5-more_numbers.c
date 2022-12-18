#include "main.h"
/**
 * more_numbers - function that prints numbers from 0 to 14 ten times
 * Return: numbers 0 to 14 in ten places
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
	int ch;

	for (ch = 0; ch <= 14; ch++)
	{
		if (ch >= 10)
		_putchar('0');
		_putchar(ch % 10 + '0');
	}
	_putchar('\n');
	}
}
