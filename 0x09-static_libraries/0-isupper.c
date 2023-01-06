#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: the character to be checked
 * Return: to return 1 if character is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
