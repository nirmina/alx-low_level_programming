#include "main.h"
#include <stdio.h>
/**
 * _strcmp -  a function that compares two strings.
 * @s1: char
 * @s2: char
 * Return: 1 (true) 0 (false)
 */
int _strcmp(char *s1, char *s2)
{
int c = 0;
while (*s1)
{
if (*s1 != *s2)
{
c = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (c);
}
