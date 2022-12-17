#include <stdio.h>

/**
 * main - prints all the possible combinations of three different digits,
 *			in ascendimg order, separated by a comma, followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int value1, value2, value3;

	for (value1 = 0; value1 < 8; value1++)
	{
		for (value2 = value1 + 1; value2 < 9; value2++)
		{
		for (value3 = value2 + 1; value3 < 10; value3++)
		{
			putchar((value1 % 10) + '0');
			putchar((value2 % 10) + '0');
			putchar((value3 % 10) + '0');

			if (value1 == 7 && value2 == 8 && value3 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
}

putchar('\n');

return (0);
}
