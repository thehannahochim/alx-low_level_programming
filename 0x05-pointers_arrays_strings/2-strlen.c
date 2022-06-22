#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: This function prints the
 * length of a string.
 *
 * Return: retuns length of string.
 */

int _strlen(char *s)
{
	int length = 0;
	int i=0;

	for (s[i] = 0;s[i] <= '\0'; s[i]++)
	{
		length = length + 1;
	}
	return(length);
}
