#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: This function prints the alphabet in lowercase.
 *
 * Return: returns 0 on success.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
