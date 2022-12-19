#include <stdio.h>
/**
 * main - entry
 * Description: prints the numbers from 1 - 100 w/
 * prints 'Fizz' for multiples of 3 and 'Buzz' for the multiples of 5
 * prints 'FizzBuzz' for multiple of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
