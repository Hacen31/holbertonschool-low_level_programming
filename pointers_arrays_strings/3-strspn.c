#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix of a string.
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * only of bytes from accept.
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index = 0;
	int index;

while ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (!(accept[index + 1])
return (bytes++)
}
