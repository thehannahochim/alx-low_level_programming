#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all the
 * numbers of base 16 in lowercase
 *
 * Return: Returns 0 on success.
 */

int main(void)
{
	int n;
	int ch;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
