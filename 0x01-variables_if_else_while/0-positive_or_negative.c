#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks if a number is less or equal or more to 0
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
		printf("%i is zero", n);

	else if (n < 0)
		printf("%i is negative", n);

	else
		printf("%i is positive", n);

	putchar('\n');

	return (0);
}
