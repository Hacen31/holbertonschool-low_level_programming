#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Retourne le nombre d'éléments
 * dans une liste de listint_t liée.
 * @h : Un pointeur sur la tête de la liste listint_t.
 *
 * Retourne : Le nombre d'éléments dans la liste listint_t.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
