#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prototype
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
/**
 * main - check the code
 * print_alphabet - prototype
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
