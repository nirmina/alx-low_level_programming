#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - function is a recursive helper function
 * that compares characters at the given indices n and i
 * @n: input int
 * @i: input int
 * @s: input char
 * Return: 0 (not a palindrom)
 */
int is_palindrome_recursive(char *s, int n, int i)
{
if (n >= i)
return (1);
if (s[n] != s[i])
return (0);
return (is_palindrome_recursive(s, n + 1, i - 1));
}
/**
 * is_palindrome - a function that returns 1 if a string is
 *  a palindrome and 0 if not
 *  @s: input
 *  Return: 0 ( not a palindrom) 1 ( palindrom)
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_recursive(s, 0, length - 1));
}
