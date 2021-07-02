#include "holberton.h"
/**
 **_strncpy - copy a string
 *@dest: string
 *@src: string
 *@n: integer
 *Return: void
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
 while (i < n && src[i] != '\0')
   {
     dest[i] = src[i];
     i++;
   }
 if (i < n)
   {
     for (; i < n; i++)
       dest[i] = '\0';
   }
 return(dest);
}