#include "main.h"

/**
 * swap_int - This function swaps two integers.
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
