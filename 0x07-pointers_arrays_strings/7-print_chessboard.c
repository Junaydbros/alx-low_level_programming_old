#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	for (int c = 0; c < 8; c++)
	{
		for (int d = 0; d < 8; d++)
		{
			if ((c + d) % 2 == 0)
			{
				a[c][d] = 'B';
			}
			else
			{
				a[c][d] = 'W';
			}
			_putchar(a[c][d]);
		}
		_putchar('\n');
	}
}
