#include "main.h"

/**
 * strcat - Concatène la chaîne pointée et l'octet de fin.
 * @dest: ajoute la chaine source src
 * @src: Chaine de caractere source
 * Return: renvoie un pointeur vers la chaîne résultante dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index++];

	return (dest);
}
