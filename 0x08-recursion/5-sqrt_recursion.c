#include "main.h"
#include <stdio.h>
/**
 * square - find suare root
 * @val1: to find suare root
 * @val2: square root
 * Return: integer
 */
int square(int val1, int val2)
{
if (val1 * val1 == val2)
return (val1);
else if (val1 * val1 < val2)
return (square(val2, val1 + 1));
else
return (-1);
}
/**
 * _sqrt_recursion - a function that returns the natural square root of a numbe
 * @n: number to calculate square root
 * Return: the resulting square
 */
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
