#include "lists.h"

/**
 * list_len - Trouve le nombre d'éléments dans
 * une liste_t liée.
 * @h : La liste_t liée.
 *
 * Retourner : Le nombre d'éléments dans h.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;


	while (h)
	{
		elements++;
		h = h->next;
	}


	return (elements);
}
