#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: This function prints the
 * length of a string.
 *
 * @s: String to be counted.
 *
 * Return: retuns length of string.
 */

int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		length = length + 1;
		i++;
	}
	return (length);
}
