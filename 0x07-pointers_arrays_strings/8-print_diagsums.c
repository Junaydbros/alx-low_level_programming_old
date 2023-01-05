#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of
 * a square matrix of integers
 * @a: pointer to the start of matrix
 * @size: width of matrix column
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	int i, j;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + ((i * size) + i));
	}
	for (j = 0; j < size; j++)
	{
		sum2 += *(a + ((j * size) + (size - 1 - j)));
	}
	printf("%i, ", sum1);

	printf("%i\n", sum2);
}
