#include "main.h"
#include <stdio.h>

/**
 * strcat - Concatenates the pointed string and the end byte
 * char *strcat(char *dest, const char *src).
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
