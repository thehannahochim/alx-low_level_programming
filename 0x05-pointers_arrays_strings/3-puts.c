#include "main.h"

/**
 * _puts - This function is designed
 * to print out a string without
 * the use of standard library functions.
 *
 * @str: Pointer to the string.
 *
 * return: returns void.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
