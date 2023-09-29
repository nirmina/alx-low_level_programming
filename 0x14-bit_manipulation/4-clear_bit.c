#include <stdio.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit
 * Return: 1 (success) , -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int number_bit = sizeof(unsigned long int) * 8;
unsigned long int m;
if (index >= number_bit)
{
return (-1);
}
m = ~(1UL << index);
*n = *n & m;
return (1);
}
