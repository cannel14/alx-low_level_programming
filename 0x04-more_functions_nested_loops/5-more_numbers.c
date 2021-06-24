#include "holberton.h"
/**
 *more_numbers - prints 10 times the numbers from 0-14
 *Return : 0-14 x10 followed by a new line
 */
void more_numbers(void)
{
int i,j,k;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (i >= 10)
{
_putchar((i / 10) + '0');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
