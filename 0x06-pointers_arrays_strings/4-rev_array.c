#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses the content of an array of integer
 * @a: int
 * @n: int
 * Return: -
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n--;  i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
