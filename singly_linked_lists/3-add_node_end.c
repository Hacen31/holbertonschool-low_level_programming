#include "lists.h"
#include <string.h>

/**
 * add_node_end - Ajoute un nouveau nœud à la fin
 * d'une liste list_t list.
 * @head : Un pointeur sur la tête de la liste list_t.
 * @str : La chaîne à ajouter à la liste list_t list.
 *
 * Retour : Si la fonction échoue - NULL.
 * Sinon - l'adresse du nouvel élément.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new, *last;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);


	dup = strdup(str);
	if (str == NULL)
		return (NULL);


	for (len = 0; str[len];)
		len++;


	new->str = dup;
	new->len = len;
	new->next = NULL;


	if (*head == NULL)
		*head = new;


	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}


	return (*head);
}

