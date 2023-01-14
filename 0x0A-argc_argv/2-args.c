#include <stdio.h>

/**
 * main - program that prints all the arguments it receives
 * the arguments would be printed including the first one
 * the program only prints one artgument per line
 * the program generally ends in a new line
 * @argv: the argument
 * @argc: the argument count
 * Return: void
 */

int main(int argc, char **argv)
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);

	return (0);
}
