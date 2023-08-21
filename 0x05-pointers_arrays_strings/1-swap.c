#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first value of a deferencing pointer
 * @b: the seconde value of a deferencing pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
int z;
int *c = &z;
*c = *a;
*a = *b;
*b = *c;
}
