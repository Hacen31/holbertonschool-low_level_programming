#include "main.h"
/**
 * print_si- imprime le signe d'un nombre
 * numero sur lequel le signe sera imprime.i
 * Return: 1 if si le nombre est superieur a 0
 * 0 if si le nombre est égal à zéro,
 * -1 if si le nombre est inférieur à zéro.
*/
int print_sign(int n)
{
	int b = 0;

	if (n > 0)
	{
		b = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		b = 0;
		_putchar('0');
	}
	else
	{
		b = -1;
		_putchar('-');
	}
	return (b);
}

