#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ch = '0';

	while (ch <= '9' || ch <= 'f')
	{
		putchar(ch);
		if (ch == '9')
		{
			ch == 'a';
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
