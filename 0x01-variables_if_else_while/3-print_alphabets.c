#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
{
	putchar(ch);
	ch++;
}
	putchar('\n');
	ch = 'A';
	while (ch <= 'Z')
{
	putchar(ch);
	ch++;
}
	putchar('\n');
	return (0);
}

