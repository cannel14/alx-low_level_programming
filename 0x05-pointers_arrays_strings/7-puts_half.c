#include <holberton.h>
/**
 *puts_half - prints half of a string
 *@char *str: string of an odd  pointer str
 *print the last n characters of string n = (length_of_the_string - 1) / 2
 *Return: void
 */
void puts_half(char *str)
{
  int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
