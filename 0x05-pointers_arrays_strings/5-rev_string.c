#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: character string to be reversed
 * Return: Always 0
 */
void rev_string(char *s)
{
	int d = 0, e, f;
	char g;

	while (s[d] != '\0')
	{
		d++;
	}
	f = d - 1;
	for (e = 0; f >= 0 && e < f; f--, e++)
	{
		g = s[e];
		s[e] = s[f];
		s[f] = g;
	}
}
