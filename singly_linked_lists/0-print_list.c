#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * afficher list - afficher tout les elements de list_t list.
 * @:list_t liste
 *
 * main - check the code
 * Return: Always 0.
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
const list_t *h
{
	struct list_head *next;
	struct list_head *prev;

	list_t;
	return (0);
}
