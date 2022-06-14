#include "main.h"
#include <stdlib.h>
/**
 * _isalpha - Cfr description
 * @c: input character
 * Description: checks for lower case character
 * Return: 1 if is lowercase and 0 otherwise
*/
int _isalpha(int c)
{
char i;
int b = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
b = 1;
}
return (b);
}
