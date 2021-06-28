#include <holberton.h>
/**
 *_atoi - convert a string to an integer
 *number in the string can be preceded by an infinite number of characters
 *need to take into account all the - and + signs before the number
 *no numbers in the string, the function must return 0
 *not allowed to use long
 *not allowed to declare new variables of “type” array
 *not allowed to hard-code special values
 *use the -fsanitize=signed-integer-overflow gcc flag to compile your code
 *Return: void
 */

int _atoi(char *s)
{

	int sign = 1;
	unsigned int num = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
