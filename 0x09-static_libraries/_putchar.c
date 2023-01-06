#include <unistd.h>

/**
 * _putchar - funcion that writes the character c to stdout
 * @c: character to be printed
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
