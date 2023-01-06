#include "main.h"
/**
 * checker - function that checks for the square root
 * @x: the natural square root of a number
 * @y: the result of the square root
 * Return: the result of the check
 */

int checker(int x, int y)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	return (checker(x + 1, y));
}

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

	return (checker(1, n));
}
