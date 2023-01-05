#include "main.h"

/**
 * factorial - a function that returns a factorial
 * @n: the factorial to be returned
 * Return: void
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
