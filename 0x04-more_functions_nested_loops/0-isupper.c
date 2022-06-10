#include "main.h"

/**
 * _isupper - This function is designed to
 * check for uppercase characters.
 * @c: Character to be checked.
 *
 * Return: returns 1 on success
 * and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
