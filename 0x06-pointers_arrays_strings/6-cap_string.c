#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @n: the string
 * Return: capitalized words in n
 */
char *cap_string(char *n)
{
	int c = 0, d;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(n + c))
	{
		if (*(n + c) >= 'a' && *(n + c) <= 'z')
		{
			if (c == 0)
				*(n + c) -= 'a' - 'A';
			else
			{
				for (d = 0; d <= 12; d++)
				{
					if (a[d] == *(n + c - 1))
						*(n + c) -= 'a' - 'A';
				}
			}
		}
		c++;
	}
	return (n);
}
