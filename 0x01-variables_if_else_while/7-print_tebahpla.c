#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase
 * alphabet in reverse using the putchar function
 *
 * Return: Returns 0 on success
 */

int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
