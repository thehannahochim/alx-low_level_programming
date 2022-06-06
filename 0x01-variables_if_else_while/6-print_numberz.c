#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all single digit numbers
 * of base 10 with putchar
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
