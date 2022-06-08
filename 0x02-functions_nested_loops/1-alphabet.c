#include <stdio.h>

/**
 * main - Entry point
 *
 * description: This function prints the alphabet in lowercase.
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
