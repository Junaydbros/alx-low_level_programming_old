#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints specific elements of,
 * an array of integers
 * @a: first integer to be checked
 * @n: second integer to be checked
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
		if (c != n - 1)
		printf("%d, ", a[c]);
		else
			printf("%d", a[c]);
	printf("\n");
}
