#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always (Success)
 */
int main(void)
{
  int letter;

  for (letter = 'a'; letter <= 'z'; letter++)
    putchar(letter);
  for (letter = 'A'; letter <= 'Z'; letter++)
    putchar(letter);
  putchar('\n');
  return(0);
}
