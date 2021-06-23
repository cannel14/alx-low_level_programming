#include "holberton.h"
/**
 *main - print the last digit of a number
 *
 *Return: Always 0.
 */
int _abs (int n)
{
if (n >= 0)
return(n);
else
return(-1 * n);
}
/**
 *interger whose last digit is to be printed.
 *Return: lastdigit
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = _abs((n % 10));
_putchar(lastDigit + 48);
return (lastDigit);
}
  
