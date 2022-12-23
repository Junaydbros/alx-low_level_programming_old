#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 * @n: string to be encoded
 * Return: rot13 encoded string
 */
char *rot13(char *n)
{
	int t, v;
	char x[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char y[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (t = 0; *(n + t); t++)
	{
		for (v = 0; v <= 52; v++)
		{
			if (x[v] == n[t])
				n[t] = y[v];
		}
	}
	return (n);
}
