#include <stdio.h>

/**
 * main - it prints both lowercase and uppercase alphabets
 *
 * Return: sucess 0
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
