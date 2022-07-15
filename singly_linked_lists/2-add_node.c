#include "lists.h"
#include <string.h>

/**
 * add_node - Ajoute un nouveau noeud au début
 * d'une liste list_t list.
 * @head : Un pointeur sur la tête de la liste list_t.
 * @str : La chaîne à ajouter à la liste list_t list.
 *
 * Retour : Si la fonction échoue - NULL.
 * Sinon - l'adresse du nouvel élément.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	unsigned int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (*head);
}
