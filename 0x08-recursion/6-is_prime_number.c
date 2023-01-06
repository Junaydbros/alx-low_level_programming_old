#include "main.h"

/**
 * checker - checks for the prime number
 * @m: an actual prime number
 * @n: the result of the evaluation
 * Return: void
 */
int checker(int m, int n)
{
	if (n < 2 || n % m == 0)
	{
		return (0);
	}
	else if (m < n / 2)
	{
		return (1);
	}
	else
	{
		return (checker(m + 1, n));
	}
}

/**
 * is_prime_number - a function that returns 1 if
 * the input integer is a prime number, otherwise return 0
 * @n: the input integer
 * Return: void for now
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (checker(2, n));
}

