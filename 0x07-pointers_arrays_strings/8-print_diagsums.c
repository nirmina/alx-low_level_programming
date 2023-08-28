#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: input int
 * @size: input int
 * Return: -
 */
void print_diagsums(int *a, int size)
{
int s1 = 0;
int s2 = 0;
int j;
for (j = 0; j < size; j++)
{
s1 = s1 + a[j * size + j];
}
for (j = size - 1; j >= 0; j--)
{
s2 = s2 + a[j * size + (size - j - 1)];
}
printf("%d, %d\n", s1, s2);
}
