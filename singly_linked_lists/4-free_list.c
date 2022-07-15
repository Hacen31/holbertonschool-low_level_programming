#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Libère une liste de list_t.
 * @head : Un pointeur sur la liste list_t.
 */
void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
