 #include <stdio.h>
  2 #include "main.h"
  3
  4 /**
  5  * binary_to_uint - Converts a binary number to an unsigned int.
  6  * @b: A pointer to a string of 0 and 1 chars.
  7  *
  8  * Return: If b is NULL or contains chars not 0 or 1 - 0.
  9  * Otherwise - the converted number.
 10  */
 11 unsigned int binary_to_uint(const char *b)
 12 {
 13     unsigned int num = 0, mult = 1;
 14     int len;
 15
 16     if (b == '\0') #include <stdio.h>
  2 #include "main.h"
  3
  4 /**
  5  * binary_to_uint - Converts a binary number to an unsigned int.
  6  * @b: A pointer to a string of 0 and 1 chars.
  7  *
  8  * Return: If b is NULL or contains chars not 0 or 1 - 0.
  9  * Otherwise - the converted number.
 10  */
 11 unsigned int binary_to_uint(const char *b)
 12 {
 13     unsigned int num = 0, mult = 1;
 14     int len;
 15
 16     if (b == '\0')#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

if (!b)
	return (0);
}
