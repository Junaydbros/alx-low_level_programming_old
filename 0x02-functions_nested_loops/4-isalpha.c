#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to be checked
 * Return: to return 1 if character is lowercase or uppercase
 *	and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
