#include "main.h"
#include <stdio.h>
/**
 * print_line - function that prints size in bytes of a buffer
 * @c: buffer to be printed
 * @s: size in bytes of the buffer to be printed
 * @l: buffer line to be printed
 * Return: print 10 bytes per line
 */
void print_line(char *c, int s, int l)
{
	int d, e;

	for (d = 0; d <= 9; d++)
	{
		if (d <= s)
			printf("%02x", c[l * 10 + d]);
		else
			printf(" ");
		if (d % 2)

			putchar(' ');
	}
	for (e = 0; e <= s; e++)
	{
		if (c[l * 10 + e] > 31 && c[l * 10 + e] < 127)
			putchar(c[l * 10 + e]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - function that prints a buffer
 * @b: buffer to be printed
 * @size: size in bytes of the buffer
 * Return: print buffer
 */
void print_buffer(char *b, int size)
{
	int a;

	for (a = 0; a <= (size - 1) / 10 && size; a++)
	{
		printf("%08x: ", a * 10);
		if (a < size / 10)
		{
			print_line(b, 9, a);
		}
		else
		{
			print_line(b, size % 10 - 1, a);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
