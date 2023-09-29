#include <stdio.h>
#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit int
 */
int get_bit(unsigned long int n, unsigned int index)
{
int valeur_bit;
if (index > 63)
return (-1);
valeur_bit = (n >> index) & 1;
return (valeur_bit);
}
