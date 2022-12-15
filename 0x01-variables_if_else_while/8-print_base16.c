#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i <= 15)
	{
		putchar(i < 10 ? '0' + i : 'a' + i - 10);
		i++;
	}
	putchar('\n');
	return (0);
}
