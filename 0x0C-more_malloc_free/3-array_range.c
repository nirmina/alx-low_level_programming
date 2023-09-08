#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers
 * @min: int
 * @max: int
 * Return: NULL if (min > max or malloc fails)and
 * the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *s;
int i;
int size;
if (min > max)
return (NULL);
size = max - min + 1;
s = malloc(sizeof(int) * size);
if (s == NULL)
return (NULL);
for (i = 0; min <= max; i++)
s[i] = min++;
return (s);
}
