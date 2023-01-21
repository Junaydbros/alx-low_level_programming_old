#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - function that prints buffer
 * @buffer: the address of the memory to be printed
 * @size: the soxe of the memory to be printed
 * Return: void
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int a;

	a = 0;
	while (a < size)
	{
		if (a % 10)
		{
			printf(" ");
		}
		if (!(a % 10) && a)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[a]);
		a++;
	}
	printf("\n");
}

/**
 * main - check the code for alx students.
 * Return: Always 0
 */

int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");

		return (1);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);

	return (0);
}
