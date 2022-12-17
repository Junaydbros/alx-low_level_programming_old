#include "main.h"
/**
 * print_to_98 - function to print all natural numbers to 98
 * @n: the character to be used
 * Return: natural numbers till 98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
