#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * the program prints the result, followed by a new line
 * the program prints '0' if no number is passed to the program,
 * followed by a new line
 * the program prints 'Error' if one of the number contains
 * symbols that are not digits
 * there's an assumption that the numbers and the addition of
 * all the numbers can be stored in an int
 * @argv: the argument
 * @argc: the argument count
 * Return: void
 */

int main(int argc, char **argv)
{
	int f, g, sum = 0;
	char *pin;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (f = 1; argv[f]; f++)
	{
		g = strtol(argv[f], &pin, 10);

		if (*pin)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += g;
		}
	}
	printf("%d\n", sum);

	return (0);
}
