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
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
