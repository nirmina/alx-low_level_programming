#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: char
 * Return: NULL if str = NULL and (success) a pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *s;
int i, j;
if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);
for (j = 0; str[j]; j++)
s[j] = str[j];
return (s);
}
