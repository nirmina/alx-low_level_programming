#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *p = needle;
while (*i == *p && *p != '\0')
{
i++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
