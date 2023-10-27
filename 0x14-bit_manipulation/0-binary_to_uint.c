#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer that is pointing to a string of 0 and 1 chars
 * Return: he converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int resul = 0;
int i;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
{
resul = resul << 1;
}
else if (b[i] == '1')
{
resul = (resul << 1) | 1;
}
else
{
return (0);
}
}
return (resul);
}
