#include "main.h"
/**
 * reverse_array - function that reverses the contents of an array of integers
 * @a: the contents of the array
 * @n: number of elements in the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int c, temp;

	for (c = 0; c < n / 2; c++)
	{
		temp = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = temp;
	}
}
