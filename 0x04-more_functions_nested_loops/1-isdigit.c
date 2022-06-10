#include "main.h"

/**
 * _isdigit - This function is a model to
 * check for a digit
 * @c: This is the value/character being checked
 *
 * Return: returns 1 on succes and
 * 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
