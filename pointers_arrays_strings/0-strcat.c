#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatène la chaîne pointée et l'octet de fin.
 * @dest: ajoute la chaine source src
 * @src: Chaine de caractere source
 * Return: renvoie un pointeur vers la chaîne résultante dest
*/

char *_strcat(char *dest, char *src)
{
	int index, dest_len;

index = 0;
	dest_len = 0;
	/* Ca c'est mon compteur */
	while (dest[dest_len])
		dest_len++;

	/* Mon compteur est a 6 */
	for (index = 0; src[index]; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}
	return (dest);
}
