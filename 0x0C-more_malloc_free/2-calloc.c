#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to allocate memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if (nmemb == 0 || size == 0)
return (NULL);
s = malloc(size * nmemb);
if (s == NULL)
return (NULL);
_memset(s, 0, nmemb * size);
return (s);
}
