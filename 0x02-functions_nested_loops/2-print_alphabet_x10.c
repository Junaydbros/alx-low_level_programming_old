#include "main.h"
/**
 * print_alphabet_x10 - prototype
 */
void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
		_putchar(ch);
		ch++;
		}
	i++;
	}
	_putchar('\n');
}
