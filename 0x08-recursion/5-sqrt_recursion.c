#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - a function that returns the natural square root of a numbe
 * @n: number to calculate square root
 * Return: the resulting square
 * square - find suare root (the second function)
 * @n: to find square root function square
 * @val2: square root of the second function square
 */
int square(int n, int val2);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}
/**
 * square - find suare root
 * @n: to find suare root
 * @val2: square root
 * Return: integer
 */
int square(int n, int val2)
{
if (val2 * val2 == n)
return (val2);
else if (val2 * val2 < n)
return (square(n, val2 + 1));
else
return (-1);
}
