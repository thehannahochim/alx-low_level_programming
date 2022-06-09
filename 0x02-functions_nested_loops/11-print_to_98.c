#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Program prints all natural
 * numbers from n to 98.
 *
 * @n: Initial/input natural number
 *
 * Return: returns 0.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	printf("98\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("98\n");
	}
}
