#include <stdio.h>
#include "main.h"
/**
 * main - entry
 * Description - prints the numbers from 1 - 100
 * prints 'Fizz' for multiples of three and 'Buzz' for the multiples of five
 * prints 'FizzBuzz' for multiple of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("Fizzbuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
