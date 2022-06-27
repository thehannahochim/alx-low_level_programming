#include "main.h"

/**
 * puts2 - Print every other character
 * of a string
 *
 * @str: String to be used.
 *
 * return: no return value.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	if (i % 2 == 0 || i == 0)
		_putchar(str[i]);
	else
	{
	}
	}
	_putchar('\n');
}
