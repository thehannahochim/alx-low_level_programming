#include <stdio.h>

/**
 * Main - Entry point
 *
 * Description: Print lowercase alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l_ch = 'a';

	for (; l_ch <= 'z';)
	{
		putchar(l_ch++);
	}
	putchar('\n');
	return (0);
}
