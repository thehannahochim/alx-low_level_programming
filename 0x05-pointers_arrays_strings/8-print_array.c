#include "main.h"
#include <stdio.h>

/**
 * print_array - This program prints n elements of
 * an array of integers.
 *
 * @a: the array
 * @n: number of times it is printed.
 *
 * return: no return value.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	{
		printf("%d", a[i]);
	}
	if (i != n - 1)
	printf(", ");
	}
	printf("\n");
}
