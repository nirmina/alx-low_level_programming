#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: teh size of elementsin array
 * @cmp: pointer to func of one of the three in main
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * or If no element matches and size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
