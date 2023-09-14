#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *  sum_them_all -  function that returns the sum of all its parameters
 *  @n: const unsigned int
 *  @...: a variable number of parametre to calculate the sum of
 *  Return: 0 (n == 0)
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
va_list ap;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
