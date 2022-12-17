#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 * in ascemding order, separated by a comma followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int value1, value2;

	for (value1 = 0; value1 < 9; value1++)
	{
		for (value2 = value1 + 1; value2 < 10; value2++)
		{
			putchar((value1 % 10) + '0');
			putchar((value2 % 10) + '0');
			if (value1 == 8 && value2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
