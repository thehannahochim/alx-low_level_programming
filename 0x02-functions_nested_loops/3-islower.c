#include <stdio.h>

/**
 * _islower - This function checks
 * for lowercase characters.
 *
 * @c: Character to be checked.
 *
 * description: Check code.
 *
 * Return: returns 1 on success and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
