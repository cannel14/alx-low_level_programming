#include <holberton.h>
/**
 *swap_int - function that swaps values 
 * int *a - interger of pointer a
 * int *b - interger of pointer b
 *Return: swaping inetgers a and b
 */
void swap_int(int *a,int *b)
{
  int var;

  var = *a;
  *a = *b;
  *b = var;
}
