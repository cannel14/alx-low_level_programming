#include "holberton.c"
/**
 *print_line - function that draws a straight line
 *_putchar to print
 *Return: _ printed n times end with \n
 */
void print_line(int n)
{
int co;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (co = 1; co <= n; co++)
{
_putchar('_');
}
_putchar('\n');
}
}
