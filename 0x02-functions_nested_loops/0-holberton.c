#include "holberton.h"
/**
 *main prints holberton
 *
 *return always 0 success
 */

int main(void)
{
char holberton[9] = {'H','o','l','b','e','r','t','o','n'};
unsigned int c;

for (c = 0; c < sizeof(holberton);c++)
_putchar(holberton[c]);
_putchar('\n');
return (0);
}
