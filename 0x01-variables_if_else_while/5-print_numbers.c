#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the single
 * digit numbers of base 10 starting from 0.
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
