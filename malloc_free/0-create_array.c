#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Crée un tableau de caractères.
 * Initialiser le tableau avec un caractère spécifique.
 * @size : La taille du tableau à initialiser.
 * @c : Le caractère spécifique avec lequel initialiser le tableau.
 * Retour create_array.
 * Retour : Si la taille == 0 ou si la fonction échoue - NULL.
 * Sinon - un pointeur sur le tableau.
 */

char *create_array(unsigned int size, char c)
{
char *array;

	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
