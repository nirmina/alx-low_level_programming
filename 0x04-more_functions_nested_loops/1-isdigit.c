#include "main.h"
/**
 * _isdigit - a function that checks for a digit
 * @c: a character
 * Return: 1 (a digit) 0 (otherwise)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
