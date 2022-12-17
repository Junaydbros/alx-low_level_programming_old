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
		_putchar(ch);
		ch++;
		if (ch > 'z')
		{
			ch = 'a';
			i++;
		}
	}
	_putchar('\n');
}
