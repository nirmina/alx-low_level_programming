#include "main.h"
#include <stdio.h>
/**
 * _strcat -  function that concatenates two strings.
 * Return: a pointer to the resulting string dest
 * @dest: char
 * @src: char
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i])
i++;
for (j = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
