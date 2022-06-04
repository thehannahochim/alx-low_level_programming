#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This source code prints the
 * alphabets first in lower letters
 * then upper
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int l_ch;
	int u_ch;

		for (l_ch = 'a'; l_ch <= 'z'; l_ch++)
		{
			putchar(l_ch);
		}
		for (u_ch = 'A'; u_ch <= 'Z'; u_ch++)
		{
			putchar(u_ch);
		}
		putchar('\n');
		return (0);
}
