#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, followed by a new line
 * @s:variable
 */

void print_rev(char *s)
{
	iiint a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (a -= 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
