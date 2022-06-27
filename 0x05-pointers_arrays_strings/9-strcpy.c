#include "main.h"

/**
 * *_strcpy - This function copies
 * one string into another buffer.
 *
 * @dest: destination
 * @src: source
 *
 * return: Destination character.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
