#include "main.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte
 * @n: unsigned int
 * @b: char
 * @s: char
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
