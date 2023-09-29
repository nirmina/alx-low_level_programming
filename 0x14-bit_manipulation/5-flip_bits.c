#include <stdio.h>
#include "main.h"
/**
 * flip_bits - the number of bits you would need to flip to get from one number
 * @n: first number
 * @m: second number
 * Return: number of bit you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int o;
unsigned int count = 0;
o = n ^ m;
while (o)
{
if (o & 1UL)
count++;
o = o >> 1;
}
return (count);
}
