#include "main.h"
#include <stdio.h>
/**
 * print_line - function that prints size in bytes of a buffer
 * @z: buffer to be printed
 * @n: size in bytes of the buffer to be printed
 * @l: buffer line to be printed
 * Return: print 10 bytes per line
 */
void print_line(char *z, int n, int l)
{
	int d, e;

	for (d = 0; d <= 9; d++)
	{
		if (d <= n)
			printf("%02x", z[l * 10 + d]);
		else
			printf(" ");
		if (d % 2)
			putchar(' ');
	}
	for (e = 0; e <= n; e++)
	{
		if (z[l * 10 + e] > 31 && z[l * 10 + e] < 127)
			putchar(z[l * 10 + e]);
		else
			putchar ('.');
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
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}
		else
		{
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
