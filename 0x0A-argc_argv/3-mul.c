#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * program prints the result of the multiplication, followed by a new line
 * there's an assumption that the two numbers and
 * the multiplication result can be stored in an integer
 * program would print 'Error' if it does not receive two numbers
 * the 'Error' print would be followed by a new line
 * @argc: the argument count
 * @argv: the arguments
 * Return: 0
 */

int main(int argc, int **argv)
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);
}
