#include "holberton.h"
/**
 *print_sign of a number
 *print 1 if positive or -1 if negative, 0 if zero
 */
int print_sign(int n)
{
if (n > 0 )
{
_putchar('+');
return (1);
}else if(n==0) {
_putchar('0');
return (0);
}else if (n < 0){
_putchar ('-');
return (-1);
}else{
_putchar('-');
return ('/');
}
}
    
