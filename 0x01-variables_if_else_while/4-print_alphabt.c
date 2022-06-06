#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This code prints the alphabet in
 * lowercase. All except letters letters q and e.
 *
 * Return: returns 0 on success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	putchar('\n');
	return (0);
}
