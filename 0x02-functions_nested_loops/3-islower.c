#include "holberton.h"
/**
 *_islower - checks for lowercase character
 *@c: first parameter
 *Description: print lower case
 *Return: 1 if it is a lowercase letter.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
