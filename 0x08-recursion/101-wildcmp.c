#include "main.h"

/**
 * str_checker - function that checks if two strings are identical
 * @s1: the first string to be checked
 * @s2: the secodn string to be checked
 * @x: the left index of the string
 * @y: the right index of the string
 * Return: void
 */

int str_checker(char *s1, char *s2, int x, int y)
{
	if (s1[x] == '\0' && s2[y] == '\0')
	{
		return (1);
	}

	if (s1[x] == s2[y])
	{
		return (str_checker(s1, s2, x + 1, y + 1));
	}

	if (s1[x] == '\0' && s2[y] == '*')
	{
		return (str_checker(s1, s2, x, y + 1));
	}

	if (s2[y] == '*')
	{
		return (str_checker(s1, s2, x + 1, y) || str_checker(s1, s2, x, y + 1));
	}

	return (0);
}

/**
 * wildcmp - a function that compares two strings and
 * returns 1 if the string is can be considered identical,
 * otherwise return 0
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: void
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
