#include "main.h"
/**
 * print_alphabet_x10 - check the code
 * imprime 10 fois l'alphabet, en minuscules, suivi d'une nouvelle ligne.
 *
 */
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 0; a <= 10; ++a)

	{
		for (b = 'a'; a <= 'z' ; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}



