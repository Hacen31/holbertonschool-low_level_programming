#include "lists.h"
#include <stdio.h>

/**
 * print_list - Imprime tous les éléments d'une liste list_t.
 * @h : La liste list_t.
 *
 * Retourne : Le nombre de noeuds dans h.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
