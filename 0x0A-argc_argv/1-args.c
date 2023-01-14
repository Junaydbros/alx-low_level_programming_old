#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * the program prints a number, followed by a new line
 * @argc: the argument count
 * @argv: the argument
 * Return: void
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
