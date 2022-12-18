#include "main.h"
/**
 * _isdigit - function that checks for a digit from 0 through 9
 * @c: character to be checked
 * Return: to return 1 if character is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}
