#include <stdio.h>

/**
 * main - Print lower case letters
 *
 * description: Print lowercase alphabets with
 * putchar followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	char l_ch;

	for (l_ch = 'a'; l_ch <= 'z'; l_ch++)
	{
		putchar(l_ch);
	}
	putchar('\n');
	return (0);
}
