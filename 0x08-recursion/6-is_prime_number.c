#include "main.h"
#include <stdio.h>
/**
 * prime - check all number smaller than m if they can divide it
 * @n: int
 * @o: int
 * Return: -
 */
int prime(int n, int o)
{
if (o >= n && n > 1)
return (1);
else if (n % o == 0 || n <= 1)
return (0);
else
return (prime(n, o + 1));
}
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: int
 * Return:n
 */
int is_prime_number(int n)
{
return (prime(n, 2));
}

