#include "main.h"

/**
 * print_numbers - This program prints the
 * numbers 0 to 9.
 *
 * Return: returns void.
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
