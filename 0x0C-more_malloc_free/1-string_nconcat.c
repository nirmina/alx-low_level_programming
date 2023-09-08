#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: NULL (fails), pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int i = 0;
unsigned int j = 0;
unsigned int lenght1 = 0;
unsigned int lenght2 = 0;
while (s1 && s1[lenght1])
lenght1++;
while (s2 && s2[lenght2])
lenght2++;
if (n < lenght2)
s = malloc(sizeof(char) * (lenght1 + n + 1));
else
s = malloc(sizeof(char) * (lenght1 + lenght2 + 1));
if (!s)
return (NULL);
while (i < lenght1)
{
s[i] = s1[i];
i++;
}
while (n < lenght2 && i < (lenght1 + n))
s[i++] = s2[j++];
s[i] = '\0';
return (s);
}
