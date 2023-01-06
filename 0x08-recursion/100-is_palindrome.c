#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string recursively
 * @s: string length to be returned
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * palin_checker - function that checks for a palindrome
 * @s: the string that palindrome would be checked from
 * @t: left index of the string
 * @v: the right index of the string
 * Return: void
 */

int palin_checker(char *s, int t, int v)
{
	if (s[t] == s[v])
	{
		if (t > v / 2)
		{
			return (1);
		}
		else
		{
			return (palin_checker(s, t + 1, v - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - function that returns 1 if
 * a string is a palindrome and 0 if not
 * @s: the string to be checked for palindrome
 * Return: void
 */

int is_palindrome(char *s)
{
	return (palin_checker(s, 0, _strlen_recursion(s) - 1));
}
