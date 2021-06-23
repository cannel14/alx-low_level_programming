#include "holberton.h"
/**
 *main -  checks for alpabets
 *check for lowercase(1) or uppercase(0)
 *Return0 or 1
 */
int _isalpha(int c)
{
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  else
    return (0);
}
