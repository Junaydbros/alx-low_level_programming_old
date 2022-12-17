#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @c: the number that the last digit would printed
 * Return: to return the value of the last digit
 */
int print_last_digit(int c)
{
	int last_digit = c % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
