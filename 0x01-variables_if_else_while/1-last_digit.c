#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	printf("%d ", n);
	printf("is ");
	if (n > 5)
{
	int last_digit = n % 10;

	printf("%d. and is greater than 5\n", last_digit);
}
	else if (n == 0)
{
	int last_digit = n % 10;

	printf("%d. and is 0\n", last_digit);
}
	else
{
	int last_digit = n % 10;

	printf("%d. and is less than 6 and not 0\n", last_digit);
}
	return (0);
}
