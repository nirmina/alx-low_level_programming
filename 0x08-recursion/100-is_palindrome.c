#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - a function that returns 1 if a string is
 *  a palindrome and 0 if not
 *  @s: input
 *  Return: 0 ( not a palindrom) 1 ( palindrom)
 */
int is_palindrome(char *s)
{
int length = strlen(s);
int i;
for (i = 0; i < length / 2; i++)
{
if (s[i] != s[length - i - 1])
{
return (0);
}
}
return (1);
}
