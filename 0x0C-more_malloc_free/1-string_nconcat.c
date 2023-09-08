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
unsigned int i;
unsigned int j;
unsigned int lenght1;
unsigned int lenght2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (lenght1 = 0; s1[lenght1] != '\0'; lenght1++)
;
for (lenght2 = 0; s2[lenght2] != '\0'; lenght2++)
;
s = malloc(lenght1 + n + 1);
if (s == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
s[i] = s1[i];
}
for (j = 0; j < n; j++)
{
s[i] = s2[j];
i++;
}
s[i] = '\0';
return (s);
}
