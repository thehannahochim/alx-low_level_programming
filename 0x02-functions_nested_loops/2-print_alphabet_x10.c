#include <stdio.h>

/**
 * print_alphabet_x10 - This function prints 10 times
 * the alphabet.
 *
 * description: Prints the alphabet 10 times,
 * followed by a new line.
 *
 * Return: void.
 */

void print_alphabet_x10(void)
{
	int n = 0;
	int ch;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			for (ch = 'a'; ch <= 'z'; ch++)
				putchar(ch);
		}
		n++;
		putchar('\n');
	}
}
