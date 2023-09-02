#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int j;
int i;
j = 0;
while (dest[j])
j++;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[j + i] = src[i];
dest[j + i] = '\0';
return (dest);
}
