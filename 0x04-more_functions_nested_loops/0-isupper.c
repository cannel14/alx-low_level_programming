#include "holberton.h"
/**
 *_isupper - function to check uppercase
 *@c: input
 *returns 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
