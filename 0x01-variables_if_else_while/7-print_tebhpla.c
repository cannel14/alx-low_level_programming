#include <stdio.h>
/**
 *main -Entry point
 *
 *return: Always 0 (Success)
 */
int main(Void)
{

  char letter;
  for(letter = 'z'; letter >= 'a' ; letter--)
    putchar(letter);
  putchar('\n');
  return(0);
}
