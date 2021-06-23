#include  "holberton.h"
/**
 *main - function that computes the absolute value of an integer.
 * Return: Always 0.
 */
int _abs(int i)
{
  if (i < 0)
    i = i * -1;
  return (i);
}
