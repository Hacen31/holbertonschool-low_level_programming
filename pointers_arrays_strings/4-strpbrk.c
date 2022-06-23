#include "main.h"
#include <stdio.h>

/**
 *@:Returns a pointer to the byte in s.
 *@:bytes accept, or NULL if no bytes of this type are found.
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept);
{
	char c, accept[100];
	int s, occurrence = 0;
	printf("Entrez une chaîne de caractères:");
	gets(accept);
	printf("Entrez un caractère:");
	scanf("%c", &c);
	for (i = 0; accept[s] != '\0'; ++s)
{
