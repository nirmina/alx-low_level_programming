#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: (failure) NULL
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
concat = malloc(sizeof(char) * (i + j + 1));
if (concat == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
concat[i]  = s1[i];
i++;
}
while (s2[j] != '\0')
{
concat[i] = s2[j];
i++;
j++;
}
concat[i] = '\0';
return (concat);
}
