#include <stdio.h>

/**
 * main - print small letters omiting q and e
 *
 * Return: - 0 succes
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar(i);
	}
	putchar('\n');

	return (0);
}
