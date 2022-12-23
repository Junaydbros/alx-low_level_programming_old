#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @n: string to be encoded
 * Return: encoded string
 */
char *leet(char *n)
{
	int y, z;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (y = 0; *(n + y); y++)
	{
		for (z = 0; z <= 9; z++)
		{
			if (a[z] == n[y])
				n[y] = b[z];
		}
	}
	return (n);
}
