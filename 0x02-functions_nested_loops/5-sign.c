#include "main.h"
/**
 * print_sign - a functon that print the sign of a number
 * @n: takes integer type input for function
 * Return: 1 if positive, 0 if null, -1 if negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
