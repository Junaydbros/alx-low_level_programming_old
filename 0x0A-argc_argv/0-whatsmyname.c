#include <stdio.h>

/**
 * main - program that print its name, irrespective of if it is renamed
 * the program would be followed by a new line
 * @argc: the argument count
 * @argv: the argument
 * Return: void
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
