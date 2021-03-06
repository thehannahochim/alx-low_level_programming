#include "main.h"

/**
 * print_last_digit - This function is
 * designed to print the last digit of
 * a number
 *
 * @n: This is the number entered
 * whose last digit will be returned.
 *
 * Return: returns n
 */

int print_last_digit(int n)
{
	int last_n = n % 10;

	if (n < 0)
	{
		last_n = last_n * -1;
	}
	_putchar(last_n + '0');
	return (last_n);
}
