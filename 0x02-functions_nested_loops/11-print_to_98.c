#include "holberton.h"
#include "stdio.h"
/**
 *main - print natural numbers to 98
 *Return: numbers
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n =n;n < 98;n++)
printf("%d,",n);
printf("%d\n",98);
}
else
{
for (n = n;n > 98;n--)
printf("%d,",n);
printf("d\n",98);
}
}
