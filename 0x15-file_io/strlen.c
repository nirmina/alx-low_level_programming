#include "main.h"
/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;
if (!s)
return (0);
while (*s++)
i++;
return (i);
}
