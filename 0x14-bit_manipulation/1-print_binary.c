#include <stdio.h>
#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number entered to print it in binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
int i = 0;
int count = 0;
unsigned long int here;
for (i = 63; i >= 0; i--)
{
here = n >> i;
if (here & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}
if (!count)
_putchar('0');
}
