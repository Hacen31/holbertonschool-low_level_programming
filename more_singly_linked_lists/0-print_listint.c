#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Imprime tous les éléments d'une liste listint_t.
 * @h : Un pointeur sur la tête de la liste list_t.
 *
 * Retourne : Le nombre de noeuds dans la liste list_t.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
