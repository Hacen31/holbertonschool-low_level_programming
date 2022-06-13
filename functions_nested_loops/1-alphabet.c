#include "main.c"
#include "main.h"
/**
 * void print_alphabet(void); - check the code
 * je veux afficher l'alphabet
 * Return: Always 0.
*/
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
