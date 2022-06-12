#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int n;
for (n = 0; n < 10; n++)
_putchar((n % 10) + '0');
for (c = 'a'; c <= 'f'; c++)
_putchar(c);
_putchar('\n');
return (0);
}
