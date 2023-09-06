#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to assign
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
s = malloc(sizeof(char) * size);
if (size == 0 || s == NULL)
return (NULL);
for (i = 0; i < size; i++)
s[i] = c;
return (s);
}
