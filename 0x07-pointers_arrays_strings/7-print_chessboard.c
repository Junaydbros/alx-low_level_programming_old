#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to pieces to print
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				a[i][j] = 'B';
			}
			else
			{
				a[i][j] = 'W';
			}
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
