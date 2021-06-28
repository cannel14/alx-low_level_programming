#include <holberton.h>
/**
 *print_array - prints n elemnets of an array 
 * @n: number of elements of array
 *numbers must be separated by comma,followed by space
 *displayed in same order as stored 
 *use printf
 *Return: void
 */
void print_array(int *a, int n)
{
  int i;

	i = 0;
	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
