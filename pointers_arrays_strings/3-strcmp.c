#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 15 if s1 > s2
 * 0 if s1 = s2
 * -15 if s1 < s2
 */

int _strcmp(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0;


	while (*s1++)
		s1_len++;


	while (*s2++)
		s2_len++;


	if (s1_len > s2_len)
		return (15);


	else if (s1_len < s2_len)
		return (-15);


	return (0);
}
