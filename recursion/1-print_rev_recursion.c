#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1))
		_print_rev_recursion(s + 1);


	_putchar(*s);
}

