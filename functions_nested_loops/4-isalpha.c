#include "main.h"
/**
 * _isalpha - Cfr description
 * @c: input character
 * Description: checks for lower case character
 * Return: 1 if is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	char i, h;
	int b = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (h = 'A'; h <= 'Z'; h++)
		{
			if ((c == i) || (c == h))
				b = 1;
		}
	}
	return (b);
}
