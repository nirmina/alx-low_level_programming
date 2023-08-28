#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function that copies memory area
 * @dest: the memory area where it is stored
 * @src: the memory area where it is copied
 * @n: number of bytes int
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int j;
int i = n;
for (j = 0; j < i; j++)
{
dest[j] = src[j];
n--;
}
return (dest);
}
