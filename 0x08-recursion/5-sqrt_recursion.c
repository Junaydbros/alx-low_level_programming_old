#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: the number to be rooted
 * Return: void
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (sqrt(n) * sqrt(n) == n)
	{
		return (sqrt(n));
	}
	else
	{
		return (-1);
	}

	return (_sqrt_recursion(n - 1));
}
