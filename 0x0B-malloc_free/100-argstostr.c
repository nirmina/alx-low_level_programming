#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: character
 * Return: the length of the string
 */
int _strlen(char *s)
{
int length = 0;
for (; s[length] != '\0'; length++)
;
return (length);
}
/**
 * argstostr -  a function that concatenates all the arguments of your program
 * @ac: int
 * @av: char
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int a, b = 0, c = 0, d = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (a = 0; a < ac; a++)
b += _strlen(av[a]);
str = malloc(sizeof(char) * (b + ac + 1));
if (str == NULL)
return (NULL);
for (a = 0; a < ac; a++)
{
for (c = 0; av[a][c]; c++, d++)
str[d] = av[a][c];
str[d] = '\n';
d++;
}
str[d] = '\0';
return (str);
}
