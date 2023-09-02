#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string.
 * @s: character
 * Return: the length of the string
 */
int _strlen(char *s)
{
int length;
length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
